/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:34:31 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/14 16:32:57 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}

/* #include <string.h>
#include <stdio.h>

int    main(void)
{
    unsigned int n;
    n = 9;
    char    s1[] = "C is fine";
    char    s2[] = "C is çgreat";
    char    s3[] = "C is amazing";
    printf("s1 - s2 = %d\n", ft_strncmp(s1, s2, n));
    printf("s2 - s3 = %d\n", ft_strncmp(s2, s3, n));
    printf("return s1 - s2 = %d\n", strncmp(s1, s2, n));
    printf("return s2 - s3 = %d\n", strncmp(s2, s3, n));
    return (0);
} */