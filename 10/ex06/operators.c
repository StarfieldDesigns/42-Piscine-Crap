/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:09:47 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/08 22:22:12 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		add_ints(int a, int b)
{
	return (a + b);
}

int		subtract_ints(int a, int b)
{
	return (a - b);
}

int		mult_ints(int a, int b)
{
	return (a * b);
}

int		div_ints(int a, int b)
{
	return (a / b);
}

int		mod_ints(int a, int b)
{
	return (a % b);
}
