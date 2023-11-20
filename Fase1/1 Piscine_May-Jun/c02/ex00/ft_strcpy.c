/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:44:21 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/12 14:47:16 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

/* #include <stdio.h>
int main()
{
    char source[] = "Hello, world!";
    char destination[20];
    
    ft_strcpy(destination, source);
    
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    
    return 0;
}
 */