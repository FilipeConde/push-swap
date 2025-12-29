/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:51:28 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/29 15:22:17 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_values(t_list **a, t_list **b, int bit, int size)
{
	int	i;

	i = 0;
	while (*a && i < size)
	{
		if (((*(int *)((*a)->content) >> bit) & 1) == 0)
			push_b(a, b);
		else if (((*((int *)(*a)->content) >> bit) & 1) == 1)
			rotate_a(a);
		i++;
	}
}

void	radix_sort(t_list **a, t_list **b)
{
	int	rank;
	int	bit;
	int	size;

	bit = 0;
	rank = get_bit_rank(a);
	size = ft_lstsize(*a);
	while (bit < rank)
	{
		split_values(a, b, bit, size);
		while (*b)
			push_a(a, b);
		if (check_if_sorted(a) == 0)
			break ;
		bit++;
	}
}
