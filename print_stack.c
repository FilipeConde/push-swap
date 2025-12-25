/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:50:44 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 20:05:50 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *a, t_list *b)
{
	while (a || b)
	{
		if (a && b)
		{
			ft_printf("%d      %d\n", *((int *)a->content),
				*((int *)b->content));
			a = a->next;
			b = b->next;
		}
		else if (a && !b)
		{
			ft_printf("%d\n", *((int *)a->content));
			a = a->next;
		}
		else if (!a && b)
		{
			ft_printf("        %d\n", *((int *)b->content));
			b = b->next;
		}
	}
	ft_printf("________\n");
	ft_printf("a______b\n\n");
}
