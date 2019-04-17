/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 16:29:04 by aholtzma          #+#    #+#             */
/*   Updated: 2019/03/28 16:29:06 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = (*a / *b);
	*a = temp;
	*b = (*a % *b);
}

int		main()
{
	int a = 42;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);

	return 0;
}