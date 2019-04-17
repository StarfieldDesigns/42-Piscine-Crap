/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:10:21 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/08 22:21:17 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

int		ft_atoi(char *str);
int		add_ints(int a, int b);
int		subtract_ints(int a, int b);
int		mult_ints(int a, int b);
int		div_ints(int a, int b);
int		mod_ints(int a, int b);
void	ft_putchar(char a);
void	ft_putstr(char *str);
void	error(int type);
void	ft_putnbr(int nb);
#endif
