/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:25:59 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/28 11:30:34 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	three_el(t_list **a)
{
	if (*(int *)(*a)->content == 2 && *(int *)(*a)->next->content == 0 )
		rotate_a(a);
	else if (*(int *)(*a)->content == 1 && *(int *)(*a)->next->content == 2 )
		reverse_rotate_a(a);
	else if (*(int *)(*a)->content == 0 && *(int *)(*a)->next->content == 2 )
	{
		reverse_rotate_a(a);
		swap_a(a);
	}
	else if (*(int *)(*a)->content == 2 && *(int *)(*a)->next->content == 1 )
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
	else if (*(int *)(*a)->content == 1 && *(int *)(*a)->next->content == 0 )
		swap_a(a);
	exit(0);
}

void	sort_short_list(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 2)
	{
		rotate_a(a);
		full_clear(a, b);
		exit(0);
	}
	if (size == 3)
		three_el(a);
	if (check_if_sorted(a) == 0)
	{
		full_clear(a, b);
		exit(0);
	}
}
