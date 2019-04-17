/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:25:36 by aholtzma          #+#    #+#             */
/*   Updated: 2019/03/29 16:25:38 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (nb == 0 || power == 0)
	{
		return (0);
	}
	while(power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
