/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bit_rank.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 15:44:55 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 19:51:41 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bit_rank(t_list **a)
{
	t_list	*curr_node;
	int		rank;
	int		nbr;

	if (!a || !*a)
		return (0);
	rank = 0;
	curr_node = *a;
	nbr = *((int *)curr_node->content);
	while (curr_node)
	{
		if (*((int *)curr_node->content) > nbr)
			nbr = *((int *)curr_node->content);
		curr_node = curr_node->next;
	}
	while ((nbr >> rank) != 0)
		rank++;
	return (rank);
}
