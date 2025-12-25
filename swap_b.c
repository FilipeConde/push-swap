/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:20:15 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 19:47:52 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **b)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (!b || !(*b) || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	third = second->next;
	*b = second;
	second->next = first;
	first->previous = second;
	first->next = third;
	if (third)
		third->previous = first;
	second->previous = NULL;
	ft_printf("sb\n");
}
