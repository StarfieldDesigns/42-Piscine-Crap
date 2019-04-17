/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:18:04 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/06 18:18:09 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int		line_is_valid(char *str)
{
	if (ft_strlen(str) != 9)
		return (0);
	while (*str)
	{
		if (((*str >= '1') && (*str <= '9')) || (*str == '.'))
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}

int		input_is_valid(int argc, char **argv)
{
	int a;

	if (argc != 10)
	{
		return (0);
	}
	a = 1;
	while (a < 10)
	{
		if (!(line_is_valid(argv[a])))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
