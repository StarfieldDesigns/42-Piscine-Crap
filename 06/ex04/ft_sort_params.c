/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:26:35 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/02 15:26:37 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		a;

	a = argc - 1;
	while (a > 0)
	{
		if (argv[a][0] > argv[a - 1][0])
		{
			ft_putstr(argv[a]);
			ft_putchar('\n');
			a--;
		}
		else
		{
			ft_putstr(argv[a]);
			ft_putchar('\n');
			a--;
		}
	}
	return (0);
}
