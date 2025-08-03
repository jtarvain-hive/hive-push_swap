#include "push_swap.h"

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*second_last;
	t_stack_node	*last;

	second_last = *stack;
	last = (*stack)->next;
	while (second_last->next->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_stack_node **stack)
{
	write(1, "rra\n", 4);
	reverse_rotate(stack);
}

void	rrb(t_stack_node **stack)
{
	write(1, "rrb\n", 4);
	reverse_rotate(stack);
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	write(1, "rrr\n", 4);
	reverse_rotate(a);
	reverse_rotate(b);
}
