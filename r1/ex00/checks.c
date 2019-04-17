/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 23:20:31 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/07 23:20:33 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		used_in_row(int table[9][9], int a, int num)
{
	int b;

	b = 0;
	while (b < 9)
	{
		if (table[a][b] == num)
			return (1);
		b++;
	}
	return (0);
}

int		used_in_col(int table[9][9], int b, int num)
{
	int a;

	a = 0;
	while (a < 9)
	{
		if (table[a][b] == num)
			return (1);
		a++;
	}
	return (0);
}

int		used_in_box(int table[9][9], int a, int b, int num)
{
	int c;
	int d;

	c = a + 3;
	d = b + 3;
	while (a < c)
	{
		while (b < d)
		{
			if (table[a][b] == num)
				return (1);
			b++;
		}
		a++;
	}
	return (0);
}

int		is_safe(int table[9][9], int a, int b, int num)
{
	if (table[a][b] == 0 && !((used_in_row(table, a, num)) || (used_in_col(table, b, num)) || (used_in_box(table, (3 * (a / 3)), (3 * (b / 3)), num))))
		return (1);
	else
		return (0);
}
