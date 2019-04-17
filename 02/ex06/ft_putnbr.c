/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 14:38:49 by aholtzma          #+#    #+#             */
/*   Updated: 2019/03/28 14:38:51 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putnbr(int nb)
{
	int n;

	n = (long)nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n > 9)
	{
		ft_putnbr((int)n / 10);
		ft_putchar((int)(n % 10) + 48);
	}
	else
	{
		ft_putchar(((int)n % 10) + 48);
	}
}
