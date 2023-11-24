#include "push_swap.h"

void	swap_a(t_stack **head)
{
	t_stack	*current;
	int		swap;

	current = *head;
	while (current->next != NULL)
		current = current->next;
	swap = current->number;                      // A vai pra C
	current->number = current->previous->number; // B vai pra A
	current->previous->number = swap;            // C vai pra B
	current->
	ft_printf("sa\n");
}

void	push_a(t_stack *head)
{
	ft_printf("pa\n");
}

void	rotate_a(t_stack *head)
{
	ft_printf("ra\n");
}

void	reverse_rotate_a(t_stack *head)
{
	ft_printf("rra\n");
}
