/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:28:26 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/11 19:47:28 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *element;

	element = malloc(sizeof(t_btree));
	if (element)
	{
		element->left = 0;
		element->right = 0;
		element->item = item;
	}
	return (element);
}
