/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lever1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclecler <aclecler@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 17:43:49 by aclecler          #+#    #+#             */
/*   Updated: 2018/10/10 18:34:01 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../dialogue.h"

int	main(void)
{
	FILE	*fp;
	FILE	*fp1;
	FILE	*fp2;

	fp = fopen("chest/nothing.txt", "r");
	fp1 = fopen("coffre/rien.txt", "r");
	fp2 = fopen("koffer/niets.txt", "r");
	if (fp == NULL && fp1 == NULL && fp2 == NULL)
	{
		printf(STR1_L1);
		return (0);
	}
	else
	{
		printf(STR2_L1);
		if (opendir("secret_room") == NULL && opendir("chambre_secrete") == NULL
		&& opendir("geheime_kamer") == NULL)
			system("sh ~/Documents/PetitBainShell/scripts/new_lever.sh");
	}
}
