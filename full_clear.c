/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:21:44 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 20:04:52 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	full_clear(t_list **a, t_list **b)
{
	ft_lstclear(b, free);
	ft_lstclear(a, free);
	free(a);
	free(b);
}
