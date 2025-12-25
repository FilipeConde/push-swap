/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:45:53 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 19:48:36 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(t_list **stack_a, char **av)
{
	t_list	*node;
	int		i;

	i = 0;
	node = NULL;
	while (av[i])
	{
		node = create_el_stack_a(ft_atoi(av[i]));
		ft_lstadd_back(stack_a, node);
		i++;
	}
	i = 0;
	return (0);
}
