/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_el_stack_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:19:26 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 19:48:14 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_el_stack_a(int nbr)
{
	int		*int_ptr;
	t_list	*node;

	int_ptr = (int *)ft_calloc(1, sizeof(int));
	if (!int_ptr)
		return (NULL);
	*int_ptr = nbr;
	node = ft_lstnew(int_ptr);
	if (!node)
	{
		free(int_ptr);
		return (NULL);
	}
	return (node);
}
