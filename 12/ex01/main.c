/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:54:10 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/11 18:55:02 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	else
		ft_display_file(argv);
	return (0);
}
