/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:51:46 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/08 21:51:47 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_atoi(char *str)
{
	int sign;
	int res;

	sign = 1;
	res = 0;
	while (*str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	res = res * sign;
	return (res);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	error(int type)
{
	if (type == 3)
		ft_putstr("Stop : division by zero");
	if (type == 2)
		ft_putstr("Stop : modulo by zero");
}

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
