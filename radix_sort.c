/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:51:28 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/21 21:19:05 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b)
{
	int		rank;
	int		bit;
	int		

	bit = 0;
	// Stack A for 1
	// Stack B for 0
	// get stack size to know when to stop
	//   control with a counter

	rank = get_bit_rank(a);
	while (bit < rank)
	{
		while (*a)
		{
			if (((*(int*)((*a)->content) >> bit) & 1) == 0)
				push_b(a, b);
			else if (((*((int*)(*a)->content) >> bit) & 1) == 1)
				rotate_a(a);
			// tmp_a = tmp_a->next;
		}
		while (*b)
		{
			push_a(a, b);
			// tmp_b = tmp_b->next;
		}
		if (check_if_sorted(a) == 0)
			break ;
		bit++;
	}
	
	// while (significant bits)
	// 	if bit == 0
	// 		pb
	// 	else if bit == 1
	// 		ra

	// 	while *b
	// 		pa
	// 	if (sorted)
	// 		stop()
	// 	next significant bit
}