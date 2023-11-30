#include "push_swap.h"

void	free_stack_b(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

void	free_stack_a(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

int	free_stacks(t_stack **stack_a, t_stack **stack_b)
{
	free_stack_a(stack_a);
	free_stack_b(stack_b);
	return (EXIT_SUCCESS);
}