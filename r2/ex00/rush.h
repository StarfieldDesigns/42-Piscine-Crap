/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:40:27 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/13 23:55:33 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct rushdata
{
	char *input;
	int height;
	int width;
	char matches[100];
} rushdata;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_result(rushdata *data);
void	find_matches(rushdata *data);
void	init_globals(rushdata *data);
void	scan_in(rushdata *data);

#endif
