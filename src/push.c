/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:36:44 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:36:45 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*first;

	if (!b || !*b)
		return ;
	first = *b;
	*b = first->next;
	first->next = *a;
	*a = first;
	write(1, "pa\n", 3);
}

void	pb(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*first;

	if (!a || !*a)
		return ;
	first = *a;
	*a = first->next;
	first->next = *b;
	*b = first;
	write(1, "pb\n", 3);
}
