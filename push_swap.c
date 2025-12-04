/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:31:34 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/04 20:22:47 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	**stack_a;
	t_list	*node;
	t_list	*temp;
	int		i;

	i = 0;
	stack_a = ft_calloc(1, sizeof(t_list *));
	node = NULL;
	if (ac < 2)
	return (1);
	// ft_printf("Val: %d\n", check_input_params(++av));  // starts out by the second param cuz first is program name
	check_input_params(++av);
	while (av[i])
	{
		node = create_el_stack_a(ft_atoi(av[i]));
		ft_lstadd_back(stack_a, node);
		i++;
	}
	temp = *stack_a;
	while (temp)
	{
		ft_printf("node val: %d\n", *((int*)temp->content));
		temp = temp->next;
	}
	return (0);
}
