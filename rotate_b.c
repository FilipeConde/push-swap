/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 10:22:37 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/14 12:50:08 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **b)
{
	t_list	*node;

	node = *b;
	*b = (*b)->next;
	(*b)->previous = NULL;
	*b = ft_lstlast(*b);
	(*b)->next = node;
	node->next = NULL;
	node->previous = *b;
	*b = ft_lstfirst(*b);
	ft_printf("rb\n");

}