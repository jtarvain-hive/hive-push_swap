#include "push_swap.h"

void	sort_stack(t_stack_node **a, t_stack_node **b)
{
	int	stack_size;

	if (is_sorted(*a))
		return ;
	stack_size = stack_len(*a);
	if (stack_size == 2)
		sa(a);
	else if (stack_size == 3)
		sort_three(a);
	else
	 	turk_sort(a, b);
}

void	sort_three(t_stack_node **a)
{
	if (find_max(*a) == (*a)->value)
		ra(a);
	else if (find_max(*a) == (*a)->next->value)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}
