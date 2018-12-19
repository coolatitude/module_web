/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lever2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclecler <aclecler@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:43:49 by aclecler          #+#    #+#             */
/*   Updated: 2018/10/11 16:35:23 by aclecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../dialogue.h"

int	main(void)
{
	FILE *fp;
	FILE *fp2;
	FILE *fp3;
	FILE *fp4;
	FILE *fp5;
	FILE *fp6;
	FILE *fp7;
	FILE *fp8;
	FILE *fp9;

	fp = fopen("time.txt", "r");
	fp2 = fopen("mirror.txt", "r");
	fp3 = fopen("sword.txt", "r");
	fp4 = fopen("temps.txt", "r");
	fp5 = fopen("miroir.txt", "r");
	fp6 = fopen("epee.txt", "r");
	fp7 = fopen("tijd.txt", "r");
	fp8 = fopen("spiegel.txt", "r");
	fp9 = fopen("zwaard.txt", "r");
	if (fp != NULL || fp3 != NULL || fp4 != NULL || fp6 != NULL
	|| fp7 != NULL || fp9 != NULL)
	{
		printf(STR1_L2);
		system(STR2_L2);
		return (0);
	}
	else if (fp2 != NULL || fp5 != NULL || fp8 != NULL)
	{
		printf(STR3_L2);
		system("sh ~/Documents/PetitBainShell/scripts/second_lever.sh");
	}
	else
	{
		printf(STR1_L2);
		system(STR2_L2);
	}
	return (0);
}
