/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_params.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:15:40 by fconde-p          #+#    #+#             */
/*   Updated: 2025/12/27 18:00:57 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_digits_qty(const char *str)
{
	size_t	len;
	int		has_sign;

	len = ft_strlen(str);
	has_sign = (str[0] == '-' || str[0] == '+');
	if (has_sign && len == 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	if (len > 11)
	{
		ft_printf("Error\n");
		return (0);
	}
	if (len == 11 && !has_sign)
	{
		ft_printf("Error\n");
		return (0);
	}
	return (1);
}

static int	check_integer(const char *str)
{
	int i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			ft_printf("Error\n");
			return (0);
		}
		i++;
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
				ft_printf("Error\n");
				return (0);
			}
			ptr_j++;
		}
		ptr_i++;
	}
	return (1);
}

int	check_input_params(char **str)
{
	int		i;
	long	val;

	i = 0;
	while (str[i])
	{
		if (!check_integer(str[i]))
			return (1);
		if (!check_digits_qty(str[i]))
			return (1);
		val = ft_atol(str[i]);
		if (val > 2147483647 || val < -2147483648)
		{
			ft_printf("Error\n");
			return (1);
		}
		i++;
	}
	if (!check_double(str))
		return (1);
	return (0);
}
