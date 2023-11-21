/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalldigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:52:38 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/11/21 12:08:50 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalldigit(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0);
	while (*str)
	{
		if (*str == '-')
		{
			str++;
			if (!ft_isdigit(*str) && *str != '\0')
				return (0);
		}
		else if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
