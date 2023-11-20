/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:30:44 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/14 20:05:23 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 0;
	while (str[i] != '\0')
	{
		if (cap == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			cap++;
		}
		else if (cap > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			cap = 0;
		else
			cap++;
		i++;
	}
	return (str);
}

/* int main()
{
    char str[] = "salYYYYut, comment tu vas ? 42mots";
    printf("Before: %s\n", str);
    ft_strcapitalize(str);
    printf("After: %s\n", str);
    return 0;
}*/