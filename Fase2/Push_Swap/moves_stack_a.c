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
void	rotate_a(t_stack **head)
{
	t_stack	*current;
	t_stack	*temp;

	current = *head;
	while (current->next != NULL)
		current = current->next;
	temp = current;
	current = current->previous;
	if (temp->previous->next != NULL)
		temp->previous->next = temp->next;
	if (current->previous != NULL)
		current->previous->next = temp;
	temp->previous = current->previous;
	temp->next = current;
	current->previous = temp;
	current->next = NULL;
	*head = temp;
	ft_printf("ra\n");
}

void	push_a(t_stack **head)
{
	ft_printf("pa\n");
}

void	reverse_rotate_a(t_stack **head)
{
	t_stack	*last;
	t_stack	*current;
	t_stack	*temp;

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