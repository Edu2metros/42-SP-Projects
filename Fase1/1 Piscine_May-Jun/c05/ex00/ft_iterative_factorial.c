/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:05:02 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/15 08:05:05 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int ft_iterative_factorial(int nb);

// int main(){
//     int numb = 0;
//     int result;

//     result = ft_iterative_factorial(numb);
//     printf("the factorial of %d is %d\n", numb, result);
//     return (0);
// }