/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:34:58 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/14 15:04:44 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **a)
{
	t_list	*node;

	node = ft_lstlast(*a);
	node->previous->next = NULL;
	node->next = *a;
	(*a)->previous = node;
	*a = node;
}