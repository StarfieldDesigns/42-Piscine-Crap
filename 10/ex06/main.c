/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:24:34 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/08 22:31:47 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int			a;
	const int	(*functions[5])(int a, int b) = {add_ints,
							subtract_ints, mult_ints, div_ints, mod_ints};
	const char	*operators = "+-*/%";

	if (argc != 4)
		return (0);
	if (argv[2][0] == '/' && !ft_atoi(argv[3]))
		error(3);
	if (argv[2][0] == '%' && !ft_atoi(argv[3]))
		error(2);
	a = -1;
	while (operators[++a])
	{
		if (argv[2][0] == operators[a])
		{
			ft_putnbr(functions[a](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
		}
	}
	return (0);
}
