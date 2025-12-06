/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:46:10 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/06 13:16:17 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **a)
{
	// 1 2 3
	// 2 1 3
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (!a || !(*a) || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	third = second->next;
	*a = second;
	second->next = first;
	first->previous = second;
	first->next = third;
	if (third)
		third->previous = first;
	second->previous = NULL;
	ft_printf("sa\n");
}