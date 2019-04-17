/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:56:12 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/04 13:56:14 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str, int a)
{
	int len;

	len = 0;
	while (str[a] && str[a] != ' ' && str[a] != '\n' && str[a] != '\t')
	{
		len++;
		a++;
	}
	return (len);
}

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int		ft_wordcount(char *str)
{
	int a;
	int count;
	int isword;

	a = 0;
	count = 0;
	isword = 0;
	while (str[a])
	{
		if (str[a] && (ft_is_whitespace(str[a])))
		{
			isword = 0;
			a++;
		}
		else if (isword == 0)
		{
			isword = 1;
			count++;
		}
		a++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		a;
	int		b;
	int		c;
	char	**words;

	a = 0;
	b = 0;
	c = 0;
	words = (char**)malloc(sizeof(char*) * (ft_wordcount(str) + 1));
	while (str[a])
	{
		c = 0;
		while (str[a] && ft_is_whitespace(str[a]))
			a++;
		if (!str[a])
			break ;
		words[b] = (char*)malloc(sizeof(char) * (ft_strlen(str, a) + 1) + 1);
		while (str[a] && !(ft_is_whitespace(str[a])))
			words[b][c++] = str[a++];
		words[b][c] = '\0';
		b++;
	}
	words[b] = 0;
	return (words);
}
