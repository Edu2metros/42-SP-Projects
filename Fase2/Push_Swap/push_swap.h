/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:24:10 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/11/24 16:21:02 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

#define INTMIN -2147483648
#define INTMAX 2147483647

typedef struct s_stack
{
    int number; // 5 // 4
	int mov; // 3 // // 2
    struct s_stack *next;
    struct s_stack *previous;
} t_stack;

// STACK B FUNCTIONS

void swap_b(t_stack *head);
void push_b(t_stack *head);
void rotate_b(t_stack *head);
void reverse_rotate_b(t_stack *head);

// STACK A FUNCTIONS

void	swap_a(t_stack **head);
void	push_a(t_stack *head);
void	rotate_a(t_stack *head);
void	reverse_rotate_a(t_stack *head);

// MAIN FUNCTIONS
int	ft_limits(const char *str);
void	check_args(char **argv);
void	init_linked_list(char **argv, t_stack *value);
