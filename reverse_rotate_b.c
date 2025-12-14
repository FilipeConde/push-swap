/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 15:25:27 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/14 15:30:41 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_list **b)
{
	t_list	*node;

	node = ft_lstlast(*b);
	node->previous->next = NULL;
	node->next = *b;
	(*b)->previous = node;
	*b = node;
	ft_printf("rrb\n");
}