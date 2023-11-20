/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:09:57 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/09 16:38:41 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	restdivision;

	division = *a;
	restdivision = *b;
	*a = division / restdivision;
	*b = division % restdivision;
}

/* 
#include <stdio.h>
 int main(void)
{
    int a = 20;
    int b = 9;
    printf("%d %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
 */