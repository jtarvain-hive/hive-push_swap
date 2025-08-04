/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:36:35 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:36:36 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ps_atoi(const char *s)
{
	long	convert;
	int		sign;

	if (!s || !*s)
		ft_error();
	convert = 0;
	sign = 1;
	if (*s == '+' || *s == '-')
		if (*s++ == '-')
			sign = -1;
	if (*s < '0' || *s > '9')
		return (LONG_MAX);
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (LONG_MAX);
		convert = convert * 10 + (*s++ - '0');
		if ((sign == 1 && convert > INT_MAX)
			|| (sign == -1 && convert > (long)INT_MAX + 1))
			return (LONG_MAX);
	}
	return (convert * sign);
}
