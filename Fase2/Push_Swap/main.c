#include "push_swap.h"

void	check_args(char **argv)
{
	int			i;
	long int	num;

	i = 1;
	while (argv[i] != NULL)
	{
		num = ft_atol(argv[i]);
		if (!ft_isalldigit(argv[i]))
			exit(ft_printf("Error\n"));
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 3)
	{
		check_args(argv);
	}
}