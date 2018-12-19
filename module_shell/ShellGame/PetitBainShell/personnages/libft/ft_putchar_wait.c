/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_wait.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntom <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:31:25 by ntom              #+#    #+#             */
/*   Updated: 2018/10/11 15:13:24 by aclecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putcharw(char *message, char *name, char *str)
{
	int		wait;
	int		n;

	wait = 1;
	system("/bin/stty raw");
	fcntl(0, F_SETFL, fcntl(0, F_GETFL) | O_NONBLOCK);
	ft_putstr(str);
	while (*message)
	{
		write(1, message, 1);
		if ((n = getchar()) != -1)
			wait = 0;
		if (wait)
			makenoise(*message, name);
		message++;
	}
	system("/bin/stty cooked");
}
