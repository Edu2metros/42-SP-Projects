/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:56:06 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/15 12:04:02 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	square;

	i = 1;
	square = 1;
	while (square <= nb)
	{
		if (square == nb)
		{
			return (i);
		}
		i++;
		square = i * i;
	}
	return (0);
}
/* #include <stdio.h>

int ft_sqrt(int nb);

int main() {
    int number;
    printf("Digite um número: ");
    scanf("%d", &number);
    
    int result = ft_sqrt(number);
    if (result != 0) {
        printf("A raiz quadrada de %d é %d.\n", number, result);
    } else {
        printf("Não foi possível encontrar a raiz quadrada de %d.\n", number);
    }
    
    return 0;
}
 */
