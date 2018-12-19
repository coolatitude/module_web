/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsiquet <lsiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:15:30 by lsiquet           #+#    #+#             */
/*   Updated: 2018/11/05 09:45:51 by lsiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static t_descriptor	*get_descriptor(t_list **desc, const int fd)
{
	t_list			*current;
	t_descriptor	temp_desc;

	if (desc == NULL)
		return (NULL);
	current = *desc;
	while (current != NULL)
	{
		if (((t_descriptor *)current->content)->fd == fd)
			return (current->content);
		current = current->next;
	}
	temp_desc.fd = fd;
	ft_bzero((char *)temp_desc.buffer, BUFF_SIZE + 1);
	if ((current = ft_lstnew(&temp_desc, sizeof(temp_desc))) == NULL)
		return (NULL);
	ft_lstadd(desc, current);
	return (current->content);
}

static void			delete_descriptor(t_list **desc, const int fd)
{
	t_list	*current;
	t_list	*previous;

	if (desc == NULL)
		return ;
	current = *desc;
	previous = NULL;
	while (current != NULL)
	{
		if (((t_descriptor *)current->content)->fd == fd)
		{
			if (previous != NULL)
				previous->next = current->next;
			else
				*desc = current->next;
			free (current->content);
			free (current);
			return ;
		}
		previous = current;
		current = current->next;
	}
}

static int			append_to_line(char **line, char *str)
{
	char	*new_alloc;

	if (line != NULL)
	{
		if ((new_alloc = ft_strjoin(*line, str)) == NULL)
			return (-1);
		ft_memdel((void **)line);
		*line = new_alloc;
		return (1);
	}
	else
		return (-1);
}

static int			treat_buffer(char *buffer, t_descriptor *curr_desc,
	char **line)
{
	int		n_found;
	char	*n_pos;

	n_found = 0;
	n_pos = ft_strchr(buffer, '\n');
	if (n_pos != NULL)
	{
		*n_pos = '\0';
		n_pos++;
		ft_strncpy((char *)curr_desc->buffer, n_pos, BUFF_SIZE);
		n_found = 1;
	}
	if (append_to_line(line, buffer) < 0)
		return (-1);
	return (n_found);
}

int					get_next_line(const int fd, char **line)
{
	static t_list	*descriptors;
	t_descriptor	*curr_desc;
	int				r_bytes;
	char			buffer[BUFF_SIZE + 1];

	if (line == NULL || BUFF_SIZE <= 0 || (*line = ft_strnew(0)) == NULL ||
		(curr_desc = get_descriptor(&descriptors, fd)) == NULL)
		return (-1);
	ft_bzero(buffer, BUFF_SIZE + 1);
	ft_strclr(*line);
	if (ft_strlen(curr_desc->buffer) > 0)
		ft_strncpy((char *)buffer, (char *)curr_desc->buffer, BUFF_SIZE);
	ft_strclr(curr_desc->buffer);
	while (treat_buffer(buffer, curr_desc, line) == 0)
	{
		ft_strclr(buffer);
		if ((r_bytes = read(fd, buffer, BUFF_SIZE)) == 0 && ft_strlen(*line))
			return (1);
		else if (r_bytes == 0)
		{
			delete_descriptor(&descriptors, fd);
			return (0);
		}
		else if (r_bytes < 0)
			return (-1);
	}
	return (1);
}
