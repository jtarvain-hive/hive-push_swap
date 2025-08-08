/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:36:52 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:36:53 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_min(t_stack_node *stack)
{
	t_stack_node	*min;
	t_stack_node	*p;

	min = stack;
	p = stack;
	while (p)
	{
		if (min->value > p->value)
			min = p;
		p = p->next;
	}
	return (min);
}

t_stack_node	*find_max(t_stack_node *stack)
{
	t_stack_node	*max;
	t_stack_node	*p;

	max = stack;
	p = stack;
	while (p)
	{
		if (max->value < p->value)
			max = p;
		p = p->next;
	}
	return (max);
}

int		is_sorted(t_stack_node *a)
{
	t_stack_node	*p;

	p = a;
	while (p->next)
	{
		if (p->value > p->next->value)
			return (0);
		p = p->next;
	}
	return (1);
}

int		stack_len(t_stack_node *a)
{
	t_stack_node	*p;
	int				i;

	i = 0;
	p = a;
	while(p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
