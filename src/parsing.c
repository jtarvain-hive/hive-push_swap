/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:36:38 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:36:39 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack_node	*create_node(long n)
{
	t_stack_node	*new;

	new = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!new)
		return (NULL);
	new->value = (int)n;
	new->next = NULL;
	return (new);
}

static void	append_node(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node	*p;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	p = *stack;
	while (p->next)
		p = p->next;
	p->next = new;
}

t_stack_node	*parse_string_input(char *av)
{
	char			**strings;
	t_stack_node	*stack;
	t_stack_node	*new;
	long			num;
	int				i;

	stack = NULL;
	strings = ft_split(av, ' ');
	if (!strings)
		return (NULL);
	i = 0;
	while (strings[i])
	{
		if (!validate_and_convert(strings[i++], &num, stack))
			free_exit(strings, &stack);
		new = create_node(num);
		if (!new)
			free_exit(strings, &stack);
		append_node(&stack, new);
	}
	free_split(strings);
	return (stack);
}

t_stack_node	*parse_av_input(int ac, char **av)
{
	t_stack_node	*stack;
	t_stack_node	*new;
	long			num;
	int				i;

	stack = NULL;
	i = 1;
	while (i < ac)
	{
		if (!validate_and_convert(av[i++], &num, stack))
			free_exit(NULL, &stack);
		new = create_node(num);
		if (!new)
			free_exit(NULL, &stack);
		append_node(&stack, new);
	}
	return (stack);
}
