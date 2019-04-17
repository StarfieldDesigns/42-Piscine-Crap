/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:19:53 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/06 18:19:57 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		find_empty_spaces(int table[9][9], int *i, int *j)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 9)
	{
		b = 0;
		while (b < 9)
		{
			if (table[a][b] == 0)
			{
				*i = a;
				*j = b;
				return (1);
			}
			b++;
		}
		a++;
	}
	return (0);
}

int		solve_table(int table[9][9])
{
	int		num;
	int		a;
	int		b;

	num = 1;
	if (!find_empty_spaces(table, &a, &b))
		return (1);
	while (num <= 9)
	{
		if (is_safe(table, a, b, num))
		{
			table[a][b] = num;
			if (solve_table(table))
				return (1);
			table[a][b] = 0;
		}
		num++;
	}
	return (0);
}

void	fill_table(char **argv, int table[9][9])
{
	int a;
	int b;
	int c;

	a = 1;
	c = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 9)
		{
			if (argv[a][b] == '.')
				table[c][b] = 0;
			else
				table[c][b] = argv[a][b] - '0';
			b++;
		}
		a++;
		c++;
	}
}

void	print_table(int table[9][9])
{
	int a;
	int b;

	a = 0;
	while (a < 9)
	{
		b = 0;
		while (b < 8)
		{
			ft_putchar(table[a][b] + '0');
			ft_putchar(' ');
			b++;
		}
		ft_putchar(table[a][b] + '0');
		ft_putchar('\n');
		a++;
	}
}
