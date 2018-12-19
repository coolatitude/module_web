/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makenoise.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntom <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:35:12 by ntom              #+#    #+#             */
/*   Updated: 2018/10/11 15:33:46 by aclecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*makenoise(char c, char *name)
{
	int		x;
	char	*str;
	char	*tmp;

	x = (c % 100);
	str = ft_strjoin("afplay -v 0.07 ~/Documents/PetitBainShell/personnages/"
			, name);
	str = ft_strjoin(str, "/sounds/");
	if (x < 10)
		str = ft_strjoin(str, "00");
	else if (x < 100)
		str = ft_strjoin(str, "0");
	tmp = ft_itoa(x);
	str = ft_strjoin(str, tmp);
	str = ft_strjoin(str, ".wav & sleep 0.035");
	system(str);
	free(str);
	return (NULL);
}
