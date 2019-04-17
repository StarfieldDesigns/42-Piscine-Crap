/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:25:54 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/01 15:17:57 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int		a;
	int		b;
	char	*res;
	char	tmp[100];

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (str[a] != to_find[b])
			a++;
		else
		{
			tmp[b] = str[a];
			a++;
			b++;
		}
	}
	res = tmp;
	res[b] = '\0';
	return (res);
}
