/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:31:34 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 20:06:32 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	**a;
	t_list	**b;
	t_list	*node;
	int		i;

	i = 0;
	a = ft_calloc(1, sizeof(t_list *));
	b = ft_calloc(1, sizeof(t_list *));
	if (!a)
		return (1);
	node = NULL;
	if (ac < 2)
		return (1);
	check_input_params(++av);
	if (init_stack(b, av) == 1)
	{
		ft_lstclear(b, free);
		free(b);
		return (1);
	}
	parse_list(a, b);
	print_stack(*a, *b);
	ft_lstclear(b, free);
	radix_sort(a, b);
	print_stack(*a, *b);
	full_clear(a, b);
	return (0);
}
