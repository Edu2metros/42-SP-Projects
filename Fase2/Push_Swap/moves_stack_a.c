#include "push_swap.h"

void	swap_a(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;

	first = *head;
	second = (*head)->next;
	first->next = second->next;
	second->previous = first->previous;
	second->next = first;
	first->previous = second;
	*head = second;
	ft_printf("sa\n");
}

void	push_a(t_stack **head)
{
	t_stack *first;
	t_stack *last;

	
	ft_printf("pa\n");
}
void	rotate_a(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;

	first = *head;
	last = first;
	while (last->next != NULL)
		last = last->next;
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = first;
	first->previous = last;
	*head = last;
	ft_printf("ra\n");
}

void	reverse_rotate_a(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;
	t_stack *imprimir;

	imprimir = *head;
	first = *head;
	last = first;
	while (last->next != NULL)
		last = last->next;
	*head = (*head)->next;
	(*head)->previous = NULL;
	last->next = first;
	first->previous = last;
	first->next = NULL;
	ft_printf("rra\n");
}
