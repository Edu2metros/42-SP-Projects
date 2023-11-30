#include "./libft/libft.h"

#define INTMIN -2147483648
#define INTMAX 2147483647

typedef struct s_stack
{
	int				number;

	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

// CHECK_ARGS FUNCTIONS

int					ft_limits(const char *str);
int					is_ordened(char **argv);
int					check_args(char **argv);

// FREE FUNCTIONS

void				free_stack_b(t_stack **stack);
void				free_stack_a(t_stack **stack);
int					free_stacks(t_stack **stack_a, t_stack **stack_b);

// MOVES FUNCTIONS

void				swap(t_stack **head, char *flag);
void				rotate(t_stack **head, char *flag);
void				reverse_rotate(t_stack **head, char *flag);

// PUSH FUNCTIONS
void				push_a(t_stack **stack_a, t_stack **stack_b, char *flag);
