/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:06:23 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/08 18:06:24 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int a;
	int *res;

	a = 0;
	res = (int*)malloc(sizeof(tab));
	while (a < length)
	{
		res[a] = f(tab[a]);
		a++;
	}
	return (res);
}
