#include "push_swap.h"

void	rotate(t_stack_node **stack)
{
	t_stack_node	*first;
	t_stack_node	*last;

	if (!stack || !*stack)
		return ;
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_stack_node **stack)
{
	write(1, "ra\n", 3);
	rotate(stack);
}

void	rb(t_stack_node **stack)
{
	write(1, "rb\n", 3);
	rotate(stack);
}

void	rr(t_stack_node **a, t_stack_node **b)
{
	write(1, "rr\n", 3);
	rotate(a);
	rotate(b);
}
