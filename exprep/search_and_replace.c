/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:05:12 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/05 14:05:13 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv) //"string" "i" "a"
{
	int i;

	i = 0;

	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		ft_putchar('\n');
		return (0);
	}

	if (argc == 4)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}