/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priape.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschoema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:30:08 by dschoema          #+#    #+#             */
/*   Updated: 2018/10/10 18:24:32 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../dialogue.h"

static void	got_food(char *str)
{
	int fp;

	if (strcmp("cake", str) == 0 || strcmp("cakes", str) == 0
	|| strcmp("gateau", str) == 0 || strcmp("gateaux", str) == 0
	|| strcmp("taarten", str) == 0)
	{
		putcharw(STR6_P, "priape", GRN);
		usleep(400000);
	}
	else
	{
		putcharw(STR7_P, "priape", GRN);
		usleep(400000);
	}
	putcharw(STR8_P, "priape", GRN);
	putcharw(STR9_P, "priape", GRN);
	system("chmod 755 castle 2> /dev/null");
	system("chmod 755 chateau 2> /dev/null");
	system("chmod 755 kasteel 2> /dev/null");
	fp = open(ft_strjoin(getenv("HOME"), "/Documents/PetitBainShell/saves/priape"), O_RDONLY);
	if (fp == -1)
	{
		system("touch ~/Documents/PetitBainShell/saves/priape");
		ft_write_eof("/Documents/PetitBainShell/ressources/help.txt", STR10_P);
	}
	else
		close(fp);

}

int			main(int argc, char **argv)
{
	FILE *fp;
	int fpd;
	int fp1;

	fp = fopen(argv[1], "r");
	if (argc != 1 && fp == NULL)
	{
		putcharw(STR11_P, "priape", GRN);
		return (0);
	}
	if (fp != NULL)
	{
		fp1 = open(ft_strjoin(getenv("HOME"), "/Documents/PetitBainShell/saves/priape"), O_RDONLY);
		if (fp1 == -1)
		{
			got_food(argv[1]);
			close (fp1);
		}
	}
	else
	{
		putcharw(STR1_P, "priape", GRN);
		usleep(400000);
		putcharw(STR2_P, "priape", GRN);
		usleep(400000);
		putcharw("\r\n.", "priape", GRN);
		usleep(400000);
		putcharw(".", "priape", GRN);
		usleep(400000);
		putcharw(".", "priape", GRN);
		usleep(400000);
		putcharw(STR3_P, "priape", GRN);
		usleep(400000);
		putcharw(STR4_P, "priape", GRN);
	}
	fpd = open(ft_strjoin(getenv("HOME"), "/Documents/PetitBainShell/saves/priape2"), O_RDONLY);
	if (fpd == -1)
	{
		system("touch ~/Documents/PetitBainShell/saves/priape2");
		ft_write_eof("/Documents/PetitBainShell/ressources/help.txt", STR5_P);
	}
	else
		close(fpd);
	return (0);
}
