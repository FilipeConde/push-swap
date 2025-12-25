/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 15:33:37 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/25 19:51:59 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_rotate(t_list **a, t_list **b)
{
	reverse_rotate_a(a);
	reverse_rotate_b(b);
	ft_printf("rrr\n");
}
