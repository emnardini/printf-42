/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_puts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorales <emorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:24:15 by emorales          #+#    #+#             */
/*   Updated: 2024/02/01 18:22:23 by emorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar_pf(char c, size_t *n_written) 
{
	write(1, &c, 1);
	n_written++;
}

void	ft_putnbr_pf(int n, int fd)
{
	long	nbl;
	char	s[10];
	int		i;

	nbl = n;
	i = 0;
	if (nbl == 0)
		write (fd, "0", 1);
	if (nbl < 0)
	{
		write (fd, "-", 1);
		nbl = nbl * -1;
	}
	while (nbl > 0)
	{
		s[i] = (nbl % 10) + 48;
		nbl = nbl / 10;
		i++;
	}
	while (i > 0)
	{
		write (fd, &s[i - 1], 1);
		i--;
	}
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_ft(*s++, fd);
}

//unsigned int
//pointer
//hex
