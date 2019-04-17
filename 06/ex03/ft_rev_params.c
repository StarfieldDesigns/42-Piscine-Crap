/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:12:16 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/02 15:12:27 by aholtzma         ###   ########.fr       */
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

	a = argc - 1;
	if (argc > 1)
	{
		while (a > 0)
		{
			ft_putstr(argv[a]);
			ft_putchar('\n');
			a--;
		}
	}
	return (0);
}
