/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 22:56:24 by aholtzma          #+#    #+#             */
/*   Updated: 2019/04/12 23:06:18 by aholtzma         ###   ########.fr       */
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

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	void *temp;

	if (!root)
	{
		btree_create_node(item);
		btree_insert_data(root, item, cmpf);
	}
	if ((cmpf(data->item, item)))
	{
		temp = root->item;
		root->left->item = temp;
		root->right->item = item;
	}
	if (root->left)
		btree_insert_data(root->left, item, cmpf);
	if (root->right)
		btree_insert_data(root->right, item, cmpf);	
}
