/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bit_rank.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 15:44:55 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/21 16:28:06 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bit_rank(t_list **a)
{
	t_list	*curr_node;
	int		rank;
	int		nbr;

	rank = 31;
	nbr = 0;
	curr_node = *a;
	while (curr_node && curr_node->next)
	{
		if (*((int*)curr_node->content) < *((int*)curr_node->next->content))
			nbr = *((int *)curr_node->next->content);
		curr_node = curr_node->next;
	}
	while (rank > 0)
	{
		if ((nbr >> rank) && 1 == 1)
			return (rank);
		rank--;
	}
	return (0);	
}