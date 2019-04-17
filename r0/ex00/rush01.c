/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 14:51:04 by aholtzma          #+#    #+#             */
/*   Updated: 2019/03/31 14:51:12 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_header(int x)
{
	int a;

	ft_putchar('/');
	a = 0;
	while (a < (x - 2))
	{
		ft_putchar('*');
		a++;
	}
	if (x != 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	print_middle(int x)
{
	int a;

	ft_putchar('*');
	a = 0;
	while (a < (x - 2))
	{
		ft_putchar(' ');
		a++;
	}
	if (x != 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	print_footer(int x)
{
	int a;

	ft_putchar('\\');
	a = 0;
	while (a < (x - 2))
	{
		ft_putchar('*');
		a++;
	}
	if (x != 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_header(x);
		while (y > 2)
		{
			print_middle(x);
			y--;
		}
		if (y > 1)
		{
			print_footer(x);
		}
	}
}
