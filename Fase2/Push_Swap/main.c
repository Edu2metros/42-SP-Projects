#include "push_swap.h"

int	ft_limits(const char *str)
{
	long int	num;

	num = ft_atol(str);
	if (num < INTMIN || num > INTMAX || !ft_isalldigit(str))
		exit(ft_printf("Error\n"));
	return (1);
}

void	check_args(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != NULL)
	{
		ft_limits(argv[i]);
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				exit(ft_printf("Error\n"));
			j++;
		}
		i++;
	}
}

void	printlist(t_stack *head)
{
	t_stack	*current;

	current = head;
	while (current)
	{
		ft_printf("%d ", current->number);
		current = current->next;
	}
	ft_printf("\n");
}

t_stack	*init_linked_list(char **argv, t_stack *value)
{
	t_stack	*current;
	t_stack	*new;
	int		i;
	int		val;

	value = ft_calloc(1, sizeof(t_stack));
	current = value;
	i = 1;
	value->number = ft_atoi(argv[i]);
	value->next = NULL;
	value->previous = NULL;
	i++;
	while (argv[i] != NULL)
	{
		new = (t_stack *)ft_calloc(1, sizeof(t_stack));
		val = ft_atoi(argv[i]);
		new->number = val;
		new->next = NULL;
		current->next = new;
		new->previous = current;
		current = new;
		i++;
	}
	return (value);
}

int	main(int argc, char **argv)
{
	t_stack	*number;

	number = NULL;
	if (argc >= 3)
	{
		check_args(argv);
		number = init_linked_list(argv, number);
		printlist(number);
		swap_a(&number);
		printlist(number);
		rotate_a(&number);
		printlist(number);
		reverse_rotate_a(&number);
		printlist(number);
	}
}

/* sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time. */