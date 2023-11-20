/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:26:46 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/15 14:27:35 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_ex02(char *str);

int	main(int agrc, char **agrv)
{
	int	i;

	i = agrc;
	if (agrc > 1)
	{
		while (i > 1)
		{
			ft_putstr_ex02(agrv[i - 1]);
			ft_putstr_ex02("\n");
			i--;
		}
	}
	return (0);
}

void	ft_putstr_ex02(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
