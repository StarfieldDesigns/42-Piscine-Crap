/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:43:51 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/11 16:44:59 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
		ft_putchar(fd, *str++);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		res;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((res = read(fd, buf, BUF_SIZE)))
			buf[res] = '\0';
		close(fd);
		ft_putstr(1, buf);
	}
	return (0);
}
