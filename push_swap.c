/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:31:34 by fconde-p          #+#    #+#             */
/*   Updated: 2025/11/19 17:03:23 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	if (ac < 2)
		return (1);
	ft_printf("Val: %d\n", check_input_params(++av));  // starts out by the second param cuz first is program name
	// while (++av)
	// {
	// 	ft_printf("val: %d\n", ft_atol(*av));
	// }
	
	return (0);
}
