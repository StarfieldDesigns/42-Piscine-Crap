/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:56:47 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/11 19:16:26 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(1, (nbr % 10) + '0');
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
		ft_putchar(fd, *str++);
}

int		ft_display_file(char **argv)
{
	int		fd;
	int		res;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr(2, "Error : ");
		ft_putnbr(errno);
		ft_putchar(1, '\n');
		return (1);
	}
	while ((res = read(fd, buf, BUF_SIZE)))
		buf[res] = '\0';
	close(fd);
	ft_putstr(1, buf);
	return (0);
}
