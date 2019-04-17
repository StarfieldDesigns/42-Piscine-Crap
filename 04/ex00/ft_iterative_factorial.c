/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:33:06 by aholtzma          #+#    #+#             */
/*   Updated: 2019/03/29 12:33:10 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
	{
		res = 1;
	}
	if (nb < 0)
	{
		res = -1;
	}
	if (nb >= 13)
	{
		return (0);
	}
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res * sign);
}
