/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:50:44 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/05 19:54:31 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack_a)
{
	while (stack_a)
	{
		ft_printf("node val: %d\n", *((int*)stack_a->content));
		stack_a = stack_a->next;
	}
}