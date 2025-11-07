/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:15:40 by fconde-p          #+#    #+#             */
/*   Updated: 2025/11/07 09:33:33 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_integer(const char *str)
{
	// check for intmax and intmin limits
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}

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
		ft_printf("val: %d\n", check_integer(*str));
		str++;
	}
	// while (*str)
	// {
		
	// 	str++;
	// }
	return (0);
}