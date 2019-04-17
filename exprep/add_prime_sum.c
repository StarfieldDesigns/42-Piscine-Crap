/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:40:19 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/16 20:12:51 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')	
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (sign * res);
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr < 0)
		nbr = -nbr;
	if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int		ft_is_prime(int n)
{
	int a;

	a = 3;
	if (n <= 1)
		return (0);
	if (n % 2 == 0 && n > 2)
		return (0);
	while (a < (n / 2))
	{
		if (n % a == 0)
			return (0);
		else
			a += 2;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int nbr;
	int sum;

	if (argc == 2)
	{	
		nbr = ft_atoi(argv[1]);
		sum = 0;
		while (nbr > 0)
			if (ft_is_prime(nbr--))
				sum += (nbr + 1);
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);	
}
