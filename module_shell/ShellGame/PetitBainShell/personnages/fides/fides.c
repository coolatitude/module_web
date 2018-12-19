/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fides.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschoema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:30:08 by dschoema          #+#    #+#             */
/*   Updated: 2018/10/09 18:18:37 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../dialogue.h"

int		main(void)
{
	int fp;

	putcharw(STR1_FI, "fides", YEL);
	usleep(400000);
	putcharw(STR2_FI, "fides", YEL);
	usleep(400000);
	putcharw(STR3_FI, "fides", YEL);
	usleep(400000);
	putcharw(STR4_FI, "fides", YEL);
	fp = open(ft_strjoin(getenv("HOME"), "/Documents/PetitBainShell/saves/fides"), O_RDONLY);
	if (fp == -1)
	{
		system("touch ~/Documents/PetitBainShell/saves/fides");
		ft_write_eof("/Documents/PetitBainShell/ressources/help.txt", STR5_FI);
	}
	else
		close(fp);
	return (0);
}
