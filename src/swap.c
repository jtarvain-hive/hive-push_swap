/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:36:57 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:36:58 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack_node **stack)
{
	t_stack_node	*first;
	t_stack_node	*second;

	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_stack_node **stack)
{
	write(1, "sa\n", 3);
	swap_stack(stack);
}

void	sb(t_stack_node **stack)
{
	write(1, "sb\n", 3);
	swap_stack(stack);
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	write(1, "ss\n", 3);
	swap_stack(a);
	swap_stack(b);
}
