/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:15:40 by fconde-p          #+#    #+#             */
/*   Updated: 2025/11/02 21:25:48 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	check_integer()
// {
// 	// code
// }

// static int	check_double()
// {
// 	// code
// }

// static int	check_int_limits()
// {
// 	// code
// }

int	check_input_params(char **str)
{
	while (*str)
	{
		ft_printf("%s\n", *str);
		str++;
	}
	// while (*str)
	// {
		
	// 	str++;
	// }
	return (0);
}