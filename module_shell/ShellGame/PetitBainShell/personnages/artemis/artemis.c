/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   artemis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschoema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:30:08 by dschoema          #+#    #+#             */
/*   Updated: 2018/10/09 18:18:13 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../dialogue.h"

int		main(void)
{
	int		fp;

	putcharw(STR1_A, "artemis", CYN);
	usleep(400000);
	putcharw(STR2_A, "artemis", CYN);
	system("ls");
	usleep(400000);
	putcharw(STR3_A, "artemis", CYN);
	usleep(400000);
	putcharw(STR4_A, "artemis", CYN);
	fp = open(ft_strjoin(getenv("HOME"), "/Documents/PetitBainShell/saves/artemis"), O_RDONLY);
	if (fp == -1)
	{
		system("touch ~/Documents/PetitBainShell/saves/artemis");
		ft_write_eof("/Documents/PetitBainShell/ressources/help.txt", STR5_A);
	}
	else
		close(fp);
	return (0);
}

/*
** system("afplay -v 0.4 ~/Documents/PetitBainShell/personnages/artemis/sounds/bjr.mp3 & sleep 0.10");
*/
