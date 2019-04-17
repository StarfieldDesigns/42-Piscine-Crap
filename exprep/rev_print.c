/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:20:20 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/05 16:20:21 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;
	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else{
		i = ft_strlen(argv[1]);
		while (i--)
		{
			write(1, &argv[1][i], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}