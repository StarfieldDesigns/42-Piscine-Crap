/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:53:07 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/03 12:53:08 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int a;
	int mem;
	int *nums;

	a = 0;
	mem = min - max;
	if (min < 0)
		mem = mem * -1;
	nums = malloc(sizeof(int) * (mem + 100));
	if (min > max)
		return (NULL);
	while (min < max)
	{
		nums[a] = min;
		a++;
		min++;
	}
	return (nums);
}
