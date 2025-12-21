/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:25:53 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/21 16:14:45 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

// add functions definitions
int	check_input_params(char **str);
t_list	*create_el_stack_a(int nbr);
int	init_stack(t_list **stack_a, char **av);
void	print_stack(t_list *a, t_list *b);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_swap(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_rotate(t_list **a, t_list **b);
void	reverse_rotate_a(t_list **a);
void	reverse_rotate_b(t_list **b);
void	reverse_rotate_rotate(t_list **a, t_list **b);
void	parse_list(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b);
int	get_bit_rank(t_list **a);

#endif