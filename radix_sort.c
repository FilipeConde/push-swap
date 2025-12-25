/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:51:28 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 19:10:48 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_list **a, t_list **b)
{
	int	rank;
	int	bit;
	int	lst_size;
	int	i;

	bit = 0;
	i = 0;
	lst_size = ft_lstsize(*a);
	rank = get_bit_rank(a);
	while (bit < rank)
	{
		while (*a && i < lst_size)
		{
			if (((*(int*)((*a)->content) >> bit) & 1) == 0)
				push_b(a, b);
			else if (((*((int*)(*a)->content) >> bit) & 1) == 1)
				rotate_a(a);
			i++;
		}
		while (*b)
		{
			push_a(a, b);
		}
		if (check_if_sorted(a) == 0)
			break ;
		bit++;
		i = 0;
	}
}