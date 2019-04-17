/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:36:32 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/10 18:10:50 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int		a;
	t_list	*list;
	t_list	*tmp;

	a = 0;
	tmp = NULL;
	if (ac < 1)
		return (0);
	else
	{
		while (++a < ac)
		{
			list = ft_create_elem(av[a]);
			list->next = tmp;
			tmp = list;
		}
	}
	return (list);
}
