/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:15:40 by fconde-p          #+#    #+#             */
/*   Updated: 2025/11/20 17:04:19 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_integer(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str) == 0)
		{
			ft_printf("Content has non numeric value. Please, check inputs.\n");
			return (0);
		}
		str++;
	}
	return (1);
}

static int	check_double(char **str)
{
	char	**ptr_i;
	char	**ptr_j;
	
	ptr_i = str;
	while (*ptr_i)
	{
		ptr_j = ptr_i + 1;
		while (*ptr_j)
		{
			if (ft_atol(*ptr_i) == ft_atol(*ptr_j))
			{
				ft_printf("Repeated input. Check '%s' occurrences.\n", *ptr_i);
				return (0);
			}
			ptr_j++;
		}
		ptr_i++;
	}
	return (1);
}

static int	check_int_limits(const char *str)
{
	if (ft_atol(str) > MAX_INT || ft_atol(str) < MIN_INT)
	{
		ft_printf("Content exceeds limits of INT. Please, check inputs.\n");
		return (0);
	}
	return (1);
}

int	check_input_params(char **str)
{
	char	**ptr_str;
	
	ptr_str = str;
	while (*ptr_str)
	{
		if (check_integer(*ptr_str) == 0)
			return (1);
		if (check_int_limits(*ptr_str) == 0)
			return (1);
		ptr_str++;
	}
	if (check_double(str) == 0)
		return (1);
	return (0);
}
