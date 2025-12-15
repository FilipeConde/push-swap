/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:59:22 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/14 21:03:47 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_list(t_list **a, t_list **b)
{
	t_list	*curr_node;
	t_list	*comp_node;
	t_list	*new_node;
	int		rank;

	curr_node = *b;
	new_node = NULL;
	while (curr_node)
	{
		rank = 0;
		comp_node = *b;
		while (comp_node)
		{
			if (*((int*)comp_node->content) < *((int*)curr_node->content))
			{
				rank++;
			}
			comp_node = comp_node->next;
		}
		new_node = create_el_stack_a(rank);
		ft_lstadd_back(a, new_node);
		curr_node = curr_node->next;
	}
}