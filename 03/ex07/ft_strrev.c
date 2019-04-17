/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:12:16 by aholtzma          #+#    #+#             */
/*   Updated: 2019/03/28 18:12:18 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strrev(char *str)
{
	char *tmp;
	char tmp2[100];
	int	a;
	int	len;

	tmp = str;
	a = 0;
	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	len--;
	while (tmp[len])
	{
		tmp2[a] = tmp[len];
		len--;
		a++;
	}
	str = tmp2;
	printf("%s\n", str);
	return (str);
}

int main()
{
	ft_strrev("string\0");
	return 0;
}