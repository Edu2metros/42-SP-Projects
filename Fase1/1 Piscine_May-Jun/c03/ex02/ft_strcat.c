/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:37:06 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/14 16:33:05 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (aux);
}

/* int main()
{
    char str1[20] = "oii, ";
    char str2[] = "leticia nerrksksk!";

    ft_strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
} */
