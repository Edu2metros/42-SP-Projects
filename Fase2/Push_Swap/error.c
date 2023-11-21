void	check_args(char **argv)
{
	int			i;
	int			j;
	long int	num;

	i = 1;
	while (argv[i] != NULL)
	{
		num = ft_atol(argv[i]);
		if (!ft_isalldigit(argv[i]) || num < INTMIN || num > INTMAX)
			exit(ft_printf("Error\n"));
		if
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