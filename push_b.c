/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 20:00:30 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 19:45:12 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **a, t_list **b)
{
	t_list	*node;

	if (!a || !*a)
		return ;
	node = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->previous = NULL;
	node->next = *b;
	if (*b)
		(*b)->previous = node;
	*b = node;
	(*b)->previous = NULL;
	ft_printf("pb\n");
}
