/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 14:46:30 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/06 14:46:31 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	int table[9][9];

	if (!(input_is_valid(argc, argv)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	fill_table(argv, table);
	solve_table(table);
	print_table(table);
	return (0);
}
