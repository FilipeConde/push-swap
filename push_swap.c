/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:31:34 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/29 11:32:19 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_up(t_list **a, t_list **b, char **av)
{
	if (init_stack(b, av) == 1)
	{
		ft_lstclear(b, free);
		free(b);
		exit(1);
	}
	parse_list(a, b);
	if (check_if_sorted(a) == 0)
	{
		full_clear(a, b);
		exit(0);
	}
}

int	main(int ac, char *av[])
{
	t_list	**a;
	t_list	**b;
	t_list	*node;
	int		i;

	if (ac < 2)
		return (1);
	if (check_input_params(++av) == 1)
		return (1);
	i = 0;
	a = ft_calloc(1, sizeof(t_list *));
	b = ft_calloc(1, sizeof(t_list *));
	if (!a)
		return (1);
	node = NULL;
	set_up(a, b, av);
	sort_short_list(a, b);
	ft_lstclear(b, free);
	radix_sort(a, b);
	full_clear(a, b);
	return (0);
}
