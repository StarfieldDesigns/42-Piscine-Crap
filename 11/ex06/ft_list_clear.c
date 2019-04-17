/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:53:00 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/10 12:49:38 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list && (*begin_list)->next)
		ft_list_clear(&(*begin_list)->next);
	free(*begin_list);
	*begin_list = NULL;
}
