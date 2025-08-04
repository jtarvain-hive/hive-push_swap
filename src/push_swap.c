/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:36:41 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:36:42 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;

	init_stacks(&stack_a, &stack_b);
	//validate input
	if (ac < 2 || (ac == 2 && !av[1][0]))
		ft_error();
	else if (ac == 2)
		stack_a = parse_string_input(av[1]);
	else
		stack_a = parse_av_input(ac, av);
	//sort algorithm
	sort_stack(&stack_a, &stack_b);
	//test(&stack_a, &stack_b);
	//free memory
	free_stack(&stack_a);
	return (0);
}

void	init_stacks(t_stack_node **a, t_stack_node **b)
{
	*a = NULL;
	*b = NULL;
}

void	test(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*p;
	int				i;

	p = *a;
	i = 0;
	ft_printf("enter test\n");
	while (p)
	{
		ft_printf("Index %i value: %i\n", i, p->value);
		p = p->next;
		i++;
	}
	sa(a);
	p = *a;
	i = 0;
	ft_printf("sa test: \n");
	fflush(stdout);
	while (p)
	{
		ft_printf("Index %i value: %i\n", i, p->value);
		p = p->next;
		i++;
	}
	pb(a, b);
	pb(a, b);
	ft_printf("stack b: \n");
	p = *b;
	i = 0;
	while (p)
	{
		ft_printf("Index %i value: %i\n", i, p->value);
		p = p->next;
		i++;
	}
	rb(b);
	pa(a, b);
	pa(a, b);
	ra(a);
	rra(a);
	p = *a;
	i = 0;
	ft_printf("stack a: \n");
	while (p)
	{
		ft_printf("Index %i value: %i\n", i, p->value);
		p = p->next;
		i++;
	}
}
