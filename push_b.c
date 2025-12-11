/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 20:00:30 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/11 19:24:07 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **a, t_list **b)
{
	//apontar o nó A para B e B para A
	t_list	*node_a;
	t_list	*node_b;

	node_a = *a;
	node_b = *b;

	if (!node_b)
	{
		*b = ft_lstnew(node_a->content);
		node_a = node_a->next;
		ft_lstdelone(node_a->previous, free);
		node_a->previous = NULL;
	}

	
	ft_printf("pb\n");
}
