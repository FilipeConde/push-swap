/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:51:28 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/29 11:24:41 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b)
{
	int	rank;
	int	bit;
	int	i;

	bit = 0;
	i = 0;
	rank = get_bit_rank(a);
	while (bit < rank)
	{
		while (*a && i < ft_lstsize(*a))
		{
			if (((*(int *)((*a)->content) >> bit) & 1) == 0)
				push_b(a, b);
			else if (((*((int *)(*a)->content) >> bit) & 1) == 1)
				rotate_a(a);
			i++;
		}
		while (*b)
			push_a(a, b);
		if (check_if_sorted(a) == 0)
			break ;
		bit++;
		i = 0;
	}
}
