/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsiquet <lsiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:15:27 by lsiquet           #+#    #+#             */
/*   Updated: 2018/11/08 19:15:16 by judrion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include "../../libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

# define BUFF_SIZE 32

typedef struct	s_descriptor
{
	int			fd;
	char		buffer[BUFF_SIZE + 1];
}				t_descriptor;

int	get_next_line(const int fd, char **line);

#endif
