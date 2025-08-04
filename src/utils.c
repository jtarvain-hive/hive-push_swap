/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:37:04 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:37:05 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*p;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		p = (*stack)->next;
		free(*stack);
		*stack = p;
	}
}

void	free_split(char **strings)
{
	int	i;

	i = 0;
	if (!strings || !*strings)
		return ;
	while (strings[i])
		free(strings[i++]);
	free(strings);
}

void	free_exit(char **strings, t_stack_node **stack)
{
	if (strings)
		free_split(strings);
	if (stack)
		free_stack(stack);
	ft_error();
}

int	validate_and_convert(char *str, long *num, t_stack_node *s)
{
	t_stack_node	*p;

	*num = ps_atoi(str);
	if (*num == LONG_MAX)
		return (0);
	p = s;
	while (p)
	{
		if (p->value == *num)
			return (0);
		p = p->next;
	}
	return (1);
}
