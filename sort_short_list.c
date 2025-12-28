/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:25:59 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/28 12:48:00 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	isolate_rank(t_list **a, t_list **b, int rank)
{
	if (*(int *)(*a)->content == rank)
	{
		push_b(a, b);
		return ;
	}
	else if (*(int *)(*a)->next->content == rank)
	{
		swap_a(a);
		push_b(a, b);
		return ;
	}
	else if (*(int *)(*a)->next->next->content == rank)
	{
		rotate_a(a);
		swap_a(a);
		push_b(a, b);
		return ;
	}
	else
	{
		reverse_rotate_a(a);
		isolate_rank(a, b, rank);
	}
}

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
}

static void	four_el(t_list **a, t_list **b)
{
	isolate_rank(a, b, 3);
	three_el(a);
	push_a(a, b);
	rotate_a(a);
}

static void	five_el(t_list **a, t_list **b)
{
	isolate_rank(a, b, 3);
	isolate_rank(a, b, 4);
	three_el(a);
	if (*(int *)(*b)->content == 4)
	{
		push_a(a, b);
		push_a(a, b);
	}
	else
	{
		rotate_b(b);
		push_a(a, b);
		push_a(a, b);
	}
	rotate_a(a);
	rotate_a(a);
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
	if (size == 4)
		four_el(a, b);
	if (size == 5)
		five_el(a, b);
	if (check_if_sorted(a) == 0)
	{
		full_clear(a, b);
		exit(0);
	}
}
