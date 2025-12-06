/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:31:34 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/06 12:55:28 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	**stack_a;
	t_list	*node;
	int		i;

	i = 0;
	stack_a = ft_calloc(1, sizeof(t_list *));
	if (!stack_a)
		return (1);
	node = NULL;
	if (ac < 2)
		return (1);
	check_input_params(++av);
	if (init_stack(stack_a, av) == 1)
	{
		ft_lstclear(stack_a, free);
		free(stack_a);
		return (1);
	}
	print_stack(*stack_a);
	swap_a(stack_a);
	print_stack(*stack_a);
	ft_lstclear(stack_a, free);
	free(stack_a);
return (0);
}
