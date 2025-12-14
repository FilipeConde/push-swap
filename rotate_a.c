/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 09:52:21 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/14 10:21:24 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*node;

	node = *a;
	*a = (*a)->next;
	(*a)->previous = NULL;
	*a = ft_lstlast(*a);
	(*a)->next = node;
	node->next = NULL;
	node->previous = *a;
	*a = ft_lstfirst(*a);
	ft_printf("ra\n");

}