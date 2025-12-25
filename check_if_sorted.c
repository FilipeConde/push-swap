/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 19:52:10 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 19:53:58 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_list **a)
{
	t_list	*node;

	node = *a;
	while (node->next)
	{
		if (*(int *)node->content > *(int *)node->next->content)
			return (1);
		node = node->next;
	}
	return (0);
}
