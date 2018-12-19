/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   despina.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschoema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:30:08 by dschoema          #+#    #+#             */
/*   Updated: 2018/10/09 18:18:23 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../dialogue.h"

int		main(void)
{
	int fp;

	putcharw("Hmmmm", "despina", MAG);
	usleep(400000);
	putcharw(".", "despina", MAG);
	usleep(400000);
	putcharw(".", "despina", MAG);
	usleep(400000);
	putcharw(".", "despina", MAG);
	usleep(400000);
	putcharw(STR1_D, "despina", MAG);
	usleep(400000);
	putcharw(STR2_D, "despina", MAG);
	fp = open(ft_strjoin(getenv("HOME"), "/Documents/PetitBainShell/saves/despina"), O_RDONLY);
	if (fp == -1)
	{
		system("touch ~/Documents/PetitBainShell/saves/despina");
		ft_write_eof("/Documents/PetitBainShell/ressources/help.txt", STR3_D);
	}
	else
		close(fp);

	return (0);
}

/*
 ** system("afplay -v 0.07 ~/Documents/PetitBainShell/personnages/despina/sounds/bjr.mp3 & sleep 0.035");
 */
