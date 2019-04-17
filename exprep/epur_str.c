/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:14:42 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/16 20:51:09 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur(char *str)
{
	int sflag;
	int a;

	sflag = -1;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && str[a] != '\t')
		{
			if (sflag == 1)
				ft_putchar(' ');
			sflag = 0;
			ft_putchar(str[a]);
		}
		else if (sflag == 0)
			sflag = 1;
		a++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		epur(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
