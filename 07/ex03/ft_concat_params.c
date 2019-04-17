/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:20:10 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/03 14:20:11 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		a;
	int		b;
	int		c;
	char	*params;

	a = 1;
	b = 0;
	c = 0;
	params = malloc((sizeof(char) + 1) * argc);
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
			params[c++] = argv[a][b++];
		if (a == argc - 1)
			params[c++] = '\0';
		else
			params[c++] = '\n';
		a++;
	}
	return (params);
}
