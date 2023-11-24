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

void	init_linked_list(char **argv, t_stack *value)
{
	t_stack	*current;
	t_stack	*new;
	int		i;
	int		val;

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
}

int	main(int argc, char **argv)
{
	t_stack number;
	if (argc >= 3)
	{
		check_args(argv);
		init_linked_list(argv, &number);
	}
}