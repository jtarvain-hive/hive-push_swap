/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:37:30 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:37:48 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_stack_node *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = false;
		else
			stack->above_median = true;
		i++;
		stack = stack->next;
	}
}

void	set_target_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*target_node;
	t_stack_node	*current_b;
	long			best_match;

	while (a)
	{
		current_b = b;
		best_match = LONG_MIN;
		while (current_b)
		{
			if (current_b->value > best_match 
				&& current_b->value < a->value)
			{
				best_match = current_b->value;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match == LONG_MIN)
			a->target_node = find_max(a);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

void	cost_analysis(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*p;
	int				cost;

	p = a;
	while (p)
	{
		
		p = p->next;
	}
}