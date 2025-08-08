/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:37:00 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:37:02 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_sort(t_stack_node **a, t_stack_node **b)
{
	if (stack_len(*a) > 3)
		pb(a, b);
	if (stack_len(*a) > 3)
		pb(a, b);
	while (stack_len(*a) > 3)
	{
		init_nodes_a(*a, *b);
		move_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_to_a(a, b);
	}
	current_index(*a);
	// min_on_top(a);
}

void	init_nodes_a(t_stack_node *a, t_stack_node *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	// cost_analysis(a, b);
	// set_cheapest(a);
}

void	move_to_b(t_stack_node **a, t_stack_node **b)
{

}

void	init_nodes_b(t_stack_node *a, t_stack_node *b)
{

}

void	move_to_a(t_stack_node **a, t_stack_node **b)
{

}
