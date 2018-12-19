/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   despina.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschoema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:30:08 by dschoema          #+#    #+#             */
/*   Updated: 2018/10/09 23:29:01 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../dialogue.h"

int		main(void)
{
	int fp;

	putcharw(STR1_D2, "despina", MAG);
	usleep(400000);
	putcharw(STR2_D2, "despina", MAG);
	usleep(400000);
	putcharw(STR3_D2, "despina", MAG);
	usleep(400000);
	putcharw(STR4_D2, "despina", MAG);
	usleep(400000);
	putcharw(STR5_D2, "despina", MAG);
	fp = open(ft_strjoin(getenv("HOME"), "/Documents/PetitBainShell/saves/despina2"), O_RDONLY);
	if (fp == -1)
	{
		system("touch ~/Documents/PetitBainShell/saves/despina2");
		ft_write_eof("/Documents/PetitBainShell/ressources/help.txt", STR6_D2);
	}
	else
		close(fp);

	return (0);
}
