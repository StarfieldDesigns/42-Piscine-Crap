/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:32:55 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/04 19:32:56 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>
#define TRUE	1
#define FALSE	0
#define EVEN(x)	(x % 2) == 0
#define EVEN_MSG	"I have an even number of arguments.\n"
#define ODD_MSG		"I have an odd number of arguments.\n"
#define SUCCESS		1

typedef int		t_bool;

#endif