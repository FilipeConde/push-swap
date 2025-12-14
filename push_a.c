/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 20:00:30 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/13 22:57:47 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*node;

	if (!b || !*b)
		return ;
	node = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->previous = NULL;
	node->next = *a;
	if (*a)
		(*a)->previous = node;
	*a = node;
	(*a)->previous = NULL;
	ft_printf("pa\n");
}
