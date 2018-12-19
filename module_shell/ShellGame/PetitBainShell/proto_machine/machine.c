/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   machine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchoquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:30:28 by rchoquet          #+#    #+#             */
/*   Updated: 2018/11/14 20:11:36 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <string.h>
#include <fcntl.h>
#define BUF_SIZE 25

int		main(void)
{
	FILE	*fp;
	FILE	*fp1;
	FILE	*fp2;
	FILE	*fp3;
	char	buf[BUF_SIZE];
	int		fd;
	int		ret;

	if ((fp = fopen("bug", "r")))
	{
		printf("Bug Dectected...\n");
		printf("Cannot proceed with the game.\nPlease remove the bug.\n");
		fclose(fp);

	}
	else if ((fp1 = fopen("resultats.sh", "r")))
	{
		fclose(fp1);
		system("sh resultats.sh");
		fd = open("resultats.txt", O_RDONLY);
		if ((ret = read(fd, buf, BUF_SIZE)) < 0)
			return (1);
		buf[ret] = '\0';
		if (strcmp(buf, "An error has occured\n") != 0)
			system("open -a 'google chrome' ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/source.gif ; osascript -e 'set Volume 3' ;  afplay ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/win.mp3");
		else
			system("cat resultats.txt");
		system("rm resultats.txt");
		close(fd);
	}
	else if ((fp2 = fopen("results.sh","r")))
	{
		fclose(fp2);
		system("sh results.sh");
		fd = open("results.txt", O_RDONLY);
		if ((ret = read(fd, buf, BUF_SIZE)) < 0)
			return (1);
		buf[ret] = '\0';
		if (strcmp(buf, "An error has occured\n") != 0)
			system("open -a 'google chrome' ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/source.gif ; osascript -e 'set Volume 3' ;  afplay ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/win.mp3");
		else
			system("cat results.txt");
		system("rm results.txt");
		close(fd);
	}
	else if ((fp3 = fopen("resultaten.sh", "r")))
	{
		fclose(fp3);
		system("sh resultaten.sh");
		fd = open("resultaten.txt", O_RDONLY);
		if ((ret = read(fd, buf, BUF_SIZE)) < 0)
			return (1);
		buf[ret] = '\0';
		if (strcmp(buf, "An error has occured\n") != 0)
			system("open -a 'google chrome' ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/source.gif ; osascript -e 'set Volume 3' ; afplay ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/win.mp3");
		else
			system("cat resultaten.txt");
		system("rm resultaten.txt");
		close(fd);
	}
	return (0);
}
