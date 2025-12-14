/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:59:22 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/14 20:52:27 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_list(t_list **a, t_list **b)
{
	t_list	*current_node;
	t_list	*comparitor_node;
	t_list	*new_node;
	int		rank;

	current_node = *b;
	new_node = NULL;
	while (current_node)
	{
		rank = 0;
		comparitor_node = *b;
		while (comparitor_node)
		{
			if (*((int*)comparitor_node->content) < *((int*)current_node->content))
			{
				rank++;
			}
			comparitor_node = comparitor_node->next;
		}
		// comparitor_node = ft_lstfirst(*b);
		new_node = create_el_stack_a(rank);
		ft_lstadd_back(a, new_node);
		current_node = current_node->next;
	}
}