/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:25:53 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/06 13:21:01 by fconde-p         ###   ########.fr       */
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
void	print_stack(t_list *stack_a);
void	swap_a(t_list **a);
void	swap_b(t_list **b);

#endif