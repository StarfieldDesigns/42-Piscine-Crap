/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:49:13 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/13 23:55:29 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_result(rushdata *data)
{
	int a;

	a = 0;
	ft_putstr("[rush0");
	ft_putchar(data->matches[a++]);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(
}

void	find_matches(rushdata *data)
{
	int a;
	
	a = 0;
	while (data->input)
	{
		if (data->input[0] == 'o')
			data->matches[a++] = '0';
		if (data->input[0] == '/')
			data->matches[a++] = '1';
		if (data->input[0] == 'A')
			data->matches[a++] = '2';	
	}
}

void	init_globals(rushdata *data)
{
	data->input = (char*)malloc(sizeof(char) + 2);
	data = malloc(sizeof(rushdata));
}

void	scan_in(rushdata *data)
{
	char c;
	char *temp;

	data->height = 0;
	data->width = 0;
	while (read(0, &c, 1) > 0)
	{
		if (c != '\n')
			data->width++;
		if (c == '\n')
			data->height++;
		temp = (char*)malloc(((data->height + data->width) + 2) * sizeof(char));	
		temp[((data->height) + (data->width)) - 1] = c;
		data->input[(data->height) + (data->width) - 1] = c;
	}
	data->input[((data->height) + (data->width))] = '\0';
	data->width /= data->height;
}

int		main(void)
{
	rushdata data;
	
	init_globals(&data);
	scan_in(&data);
	printf("width: %d\nheight: %d\nstring:\n%s", data.width, data.height, data.input);
	return (0);
}
