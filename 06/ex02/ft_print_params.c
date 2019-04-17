/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:52:48 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/02 14:52:49 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = 1;
	b = 1;
	if (argc > 1)
	{
		while (b < argc)
		{
			ft_putstr(argv[a]);
			ft_putchar('\n');
			a++;
			b++;
		}
	}
	return (0);
}
