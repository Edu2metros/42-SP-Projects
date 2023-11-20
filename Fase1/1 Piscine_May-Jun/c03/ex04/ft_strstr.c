/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:47:07 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/14 16:49:09 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*to_find_ptr;

	while (*str != '\0')
	{
		str_ptr = str;
		to_find_ptr = to_find;
		while (*to_find_ptr != '\0' && *str_ptr == *to_find_ptr)
		{
			str_ptr++;
			to_find_ptr++;
		}
		if (*to_find_ptr == '\0')
			return (str);
		str++;
	}
	return (0);
}

/* #include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main() {
    char str[] = "Ola, mundo!";
    char to_find[] = "m";

    char *result = ft_strstr(str, to_find);

    if (result != NULL)
        printf("%s\n", result);
    else
        printf("nao tem");

    return 0;
} */
