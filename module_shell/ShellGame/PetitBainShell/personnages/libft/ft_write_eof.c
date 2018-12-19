/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_eof.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntom <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:52:47 by ntom              #+#    #+#             */
/*   Updated: 2018/10/08 15:30:38 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_write_eof(char *path, char *str)
{
	char	*tmp;
	FILE	*fp;

	tmp = ft_strjoin(getenv("HOME"), path);
	fp = fopen(tmp, "a");
	while (*str)
		fwrite(str++, 1, sizeof(char), fp);
	fclose(fp);
	free(tmp);
	return (0);
}
