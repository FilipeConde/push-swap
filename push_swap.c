/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:31:34 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/01 22:01:02 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	**stack_a;
	t_list	*node;
	t_list	*temp;
	int		i;

	i = 1;
	stack_a = ft_calloc(1, sizeof(t_list *));
	node = NULL;
	temp = *stack_a;
	if (ac < 2)
		return (1);
	// ft_printf("Val: %d\n", check_input_params(++av));  // starts out by the second param cuz first is program name
	check_input_params(++av);
	while (av[i])
	{
		// ft_printf("val: %d\n", ft_atol(*av));
		node = create_el_stack_a(ft_atoi(av[i]));
		ft_lstadd_front(stack_a, node);
		i++;
	}
	while (temp)
	{
		ft_printf("node val: %d", *((int*)temp->content));
		temp = temp->next;
	}
	return (0);
}
