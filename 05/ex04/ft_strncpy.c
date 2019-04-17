/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:36:23 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/01 13:36:27 by aholtzma         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = ft_strlen(src);
	while (n >= b && (*src != '\0'))
	{
		dest[a] = *src;
		a++;
		src++;
		while (a >= b && a < n)
		{
			dest[a] = '\0';
			a++;
		}
	}
	while (n < b && a < n)
	{
		dest[a] = *src;
		src++;
		a++;
	}
	return (0);
}
