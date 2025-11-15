/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:02:19 by fconde-p          #+#    #+#             */
/*   Updated: 2025/11/15 12:27:50 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	gen_int(char *ptr, int acc)
// {
// 	while (ft_isdigit(*ptr) > 0)
// 	{
// 		acc = 
// 		ptr++;
// 	}
// 	return (acc);
// }

static int	check_sign(char *ptr, int *sign)
{
	if (*ptr == '-' || *ptr == '+')
	{
		if (ft_isdigit(*(ptr + 1)) == 0)
			return (0);
		if (*ptr == '-')
			*sign = -1;
		ptr++;
	}
	return (1);
}

long	ft_atol(const char *nptr)
{
	int		sign;
	long	acc;
	int		*ptr_sign;

	ptr_sign = &sign;
	sign = 1;
	acc = 0;
	while (*nptr >= 0 && *nptr <= 32)
		nptr++;
	if (ft_isalpha(*nptr))
		return (0);
	if (!check_sign((char *)nptr, ptr_sign))
		return (0);
	while (*nptr && ft_isdigit(*nptr))
	{
		acc = acc * 10 + (*nptr - '0');
		nptr++;
	}
	return (acc * sign);
}
