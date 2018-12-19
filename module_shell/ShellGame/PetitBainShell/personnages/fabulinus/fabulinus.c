/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fabulinus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschoema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:30:08 by dschoema          #+#    #+#             */
/*   Updated: 2018/10/09 18:19:13 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../dialogue.h"

int		main(void)
{
	int fp;

	putcharw(STR1_FA, "fabulinus", RED);
	usleep(400000);
	putcharw(STR2_FA, "fabulinus", RED);
	putcharw(STR3_FA, "fabulinus", RED);
	usleep(400000);
	putcharw(STR4_FA, "fabulinus", RED);
	fp = open(ft_strjoin(getenv("HOME"), "/Documents/PetitBainShell/saves/fabulinius"), O_RDONLY);
	if (fp == -1)
	{
		system("touch ~/Documents/PetitBainShell/saves/fabulinius");
		ft_write_eof("/Documents/PetitBainShell/ressources/help.txt", STR5_FA);
	}
	else
		close(fp);
	return (0);
}
