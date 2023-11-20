/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:15:09 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/14 17:15:18 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *texto = "spdghfsdpifhsda";
    int comprimento = ft_strlen(texto);
    printf("%d\n", comprimento);
    return 0;
}  */