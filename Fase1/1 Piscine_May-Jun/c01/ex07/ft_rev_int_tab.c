/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:11:02 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/07 13:22:10 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	aux;

	index = 0;
	while (index < (size / 2))
	{
		aux = tab [index];
		tab[index] = tab [size - index - 1];
		tab [size - index - 1] = aux;
		index++;
	}
}

/* #include<stdio.h>

int	main(void)
{
	int	tab[0] = {};
	int	size;
	int	index;

	size = 0;
	ft_rev_int_tab(tab, size);
	index = 0;
	while (index < size)
	{
		printf ("%d ", tab[index]);
		index++;
	}
	printf("\n");
	return (0);
} */
