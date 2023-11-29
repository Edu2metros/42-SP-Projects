/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddos-sa <eddos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:24:10 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/11/29 15:01:05 by eddos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

#define INTMIN -2147483648
#define INTMAX 2147483647

typedef struct s_stack
{
	int				number;

	struct s_stack	*next;
	struct s_stack	*previous;
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
}					t_stack;

// STACK B FUNCTIONS

void				swap_b(t_stack **head);
void				push_b(t_stack **head);
void				rotate_b(t_stack **head);
void				reverse_rotate_b(t_stack **head);

// STACK A FUNCTIONS

void				swap_a(t_stack **head);
void				push_a(t_stack **head);
void				rotate_a(t_stack **head);
void				reverse_rotate_a(t_stack **head);

// MAIN FUNCTIONS
int					ft_limits(const char *str);
void				check_args(char **argv);
t_stack				*init_linked_list(char **argv, t_stack *value);
