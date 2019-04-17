/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:55:03 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/16 21:06:25 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int a;

	a = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		a++;
	}
	return (a);
}
