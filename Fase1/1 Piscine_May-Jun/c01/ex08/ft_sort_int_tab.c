/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:11:10 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/07 13:24:10 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	position;
	int	aux;

	position = 0;
	while (position < size - 1)
	{
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				aux = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = aux;
			}
			index++;
		}
		position++;
	}
}

/* #include<stdio.h>

int	main(void)
{
	int	tab[5] = {-30, 0, 30, 8, 19};
	int	size;
	int	index;

	size = 5;
	ft_sort_int_tab(tab, size);
	index = 0;
	while (index < size)
	{
		printf ("%d ", tab[index]);
		index++;
	}
	printf("\n");
	return (0);
} */
