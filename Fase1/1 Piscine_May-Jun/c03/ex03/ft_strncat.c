/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:38:43 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/14 16:36:17 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*aux;
	unsigned int	i;

	aux = dest;
	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (aux);
}

/* #include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    unsigned int max_chars = 2;

    printf("Before ft_strncat:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    ft_strncat(str1, str2, max_chars);

    printf("\nAfter ft_strncat:\n");
    printf("str1: %s\n", str1);

    return 0;
} */
