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

// Previous de 4 apontar pra NULL
// Next de 4 apontar pra 1
// previous de 1 apontar pra 4
// next de 3 apontar pra 2
// previous de 2 apontar pra 3
// next de 2 apontar pra NULL

void	rotate_a(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	first = *head;
	last = first;
	while (last->next != NULL)
		last = last->next;
	first->previous = last;
	last->next = first->next;
	first->next->previous = last;
	last->previous->next = first;
	first->next = NULL;
	*head = last;
	ft_printf("ra\n");
}

void	push_a(t_stack **head)
{
	ft_printf("pa\n");
}

void	reverse_rotate_a(t_stack **head)
{
	t_stack *last;
	t_stack *current;
	t_stack *temp;

	temp = *head;
	current = *head;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	current = last;
	current->next = temp->next;
	current->previous = temp->previous;
	current = current->next;
	temp = temp->next;
	while (temp->next != NULL)
	{
		current = temp;
		temp = temp->next;
		ft_printf("%d\n", temp->next->number);
	}
	current->next = NULL;
	ft_printf("rra\n");
}