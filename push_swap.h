#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack_node
{
	int					value;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node *target_node;
	struct s_stack_node	*next;
}	t_stack_node;

// Function prototypes
int				main(int ac, char **av);
void			test(t_stack_node **stack_a, t_stack_node **b);

// Stack operations
void			swap_stack(t_stack_node **stack);
void			sa(t_stack_node **stack);
void			sb(t_stack_node **stack);
void			ss(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **a, t_stack_node **b);
void			rotate(t_stack_node **stack);
void			ra(t_stack_node **stack);
void			rb(t_stack_node **stack);
void			rr(t_stack_node **a, t_stack_node **b);
void			reverse_rotate(t_stack_node **stack);
void			rra(t_stack_node **stack);
void			rrb(t_stack_node **stack);
void			rrr(t_stack_node **a, t_stack_node **b);

// Sorting
void			sort_stack(t_stack_node **a, t_stack_node **b);
void			sort_two(t_stack_node **a);
void			sort_three(t_stack_node **a);
int				is_sorted(t_stack_node *a);
int				stack_len(t_stack_node *a);
int				find_max(t_stack_node *stack);

// Parsing
t_stack_node	*parse_string_input(char *av);
t_stack_node	*parse_av_input(int ac, char **av);
int				validate_and_convert(char *str, long *num, t_stack_node *s);
void			free_stack(t_stack_node **stack);
void			free_split(char **strings);
void			free_exit(char **strings, t_stack_node **stack);
long			ps_atoi(const char *s);

// Utility functions
void			ft_error(void);
void			init_stacks(t_stack_node **a, t_stack_node **b);

#endif