/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:31:43 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/05 13:31:45 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		find_index(char c)
{
	int index;
	if (c >= 'a' && c <= 'z')
	{
		index = (c - 'a') + 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		index = (c - 'A') + 1;
	}
	else
		index = 1;
	return (index);
}

int		main(int argc, char **argv)
{
	int repeat;
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat = find_index(argv[1][i]);
			while(repeat--)
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}