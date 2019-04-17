/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:53:16 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/01 15:53:17 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int a;
	int b;
	int res;

	a = 0;
	b = 0;
	res = 0;
	while (a <= (int)n)
	{
		if (s1[a] != s2[b])
		{
			res = -1;
			a++;
		}
		else
		{
			res = 0;
			a++;
			b++;
		}
	}
	if (res < 0)
		return (res);
	else
		return (res);
}
