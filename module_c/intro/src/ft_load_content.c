/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judrion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:33:32 by judrion           #+#    #+#             */
/*   Updated: 2018/11/08 19:01:59 by judrion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "intro.h"
#include "get_next_line.h"

char	**ft_load_file(const char *file_path)
{
	int		fd;
	int		error;
	char	*info_line;
	char	**file_content;
	int		content_size = 0;
	int		i;

	fd = open(file_path, O_RDONLY);
	if (fd < 0)
	{
		//show_error(100);
		return (NULL);
	}
	error = get_next_line(fd, &info_line);
	if (error != 1)
	{
		//show_error(101);
		return (NULL);
	}
	content_size = ft_extract_info(info_line, 1) * ft_extract_info(info_line, 2) + 1;
	file_content = (char**)ft_memalloc(sizeof(char*) * content_size);
	if (file_content == NULL)
	{
		ft_putendl("erreur allocation");
		//show_error(102);
		return (NULL);
	}
	*file_content = ft_strdup(info_line);
	ft_strdel(&info_line);
	i = 1;
	while ((error = get_next_line(fd, &file_content[i])) == 1)
	{
		//ft_putendl(*(file_content + i));
		i = i + 1;
	}
	if (error == -1)
	{
		ft_clean(file_content, i);
		//show_error(103);
		return (NULL);
	}
	return (file_content);
}

int	ft_extract_info(char *info_line, int info)
{
	char	**infos;
	int		extracted_info;

	infos = ft_strsplit(info_line, ':');
	switch (info)
	{
		case 0:
			extracted_info = ft_atoi(infos[0]);
			break;
		case 1:
			extracted_info = ft_atoi(infos[1]);
			break;
		case 2:
			extracted_info = ft_atoi(infos[2]);
			break;
	}
	ft_clean(infos, 3);
	return (extracted_info);
}

void	ft_clean(char **file_content, int content_size)
{
	int		i;

	i = 0;
	while (i < content_size)
	{
		free(*(file_content + i));
		i = i + 1;
	}
	free(file_content);
}

t_animated_sprite	*ft_create_animated_list(char **file_content)
{
	int	x;
	int	y;
	int	frameCount;
	int	i;
	t_animated_sprite	*current_frame;
	t_animated_sprite	*new_frame;
	t_animated_sprite	*beginning;

	x = ft_extract_info(*file_content, 0);
	y = ft_extract_info(*file_content, 1);
	frameCount = ft_extract_info(*file_content, 2);
	file_content++;
	i = 0;
	while (i < frameCount)
	{
		new_frame = (t_animated_sprite*)ft_memalloc(sizeof(t_animated_sprite));
		if (new_frame == NULL)
		{
			//clean_list();
			return (NULL);
		}
		if (i == 0)
		{
			beginning = new_frame;
			current_frame = new_frame;
			current_frame->next = NULL;
		}
		else
		{
			current_frame->next = new_frame;
			current_frame = current_frame->next;
		}
		current_frame->frameCount = frameCount;
		current_frame->currentFrame = i + 1;
		i = i + 1;
	}
	ft_add_sprite(beginning, file_content, x, y);
	new_frame->next = beginning;
	return (beginning);
}

void	ft_add_sprite(t_animated_sprite *animated_list, char **file_content, int x, int y)
{
	t_animated_sprite	*current = animated_list;
	int			i;
	int			j;

	j = 0;
	while (current != NULL)
	{
		i = 0;
		current->frames = ft_memalloc(sizeof(t_sprite));
		(current->frames)->content = (char**)ft_memalloc(sizeof(char*) * y);
		while (i < y)
		{
			*(((current->frames)->content) + i) = ft_strnew(x);
			ft_strncpy(*(((current->frames)->content) + i), *(file_content + j), x);
			i = i + 1;
			j = j + 1;
		}
		current = current->next;
	}
}
