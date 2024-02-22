/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:46:49 by alnzohab          #+#    #+#             */
/*   Updated: 2024/02/22 15:52:56 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>

typedef struct  s_node
{
    int value;
    struct s_node *next;
}   t_node;

typedef struct s_stack
{
    t_node *a;
    t_node *b;
} t_stack;

void sa(t_stack *stack_a);
void sb(t_stack *stack_b);
void ra(t_stack *stack_a);
void ss(t_stack *stack);
void	pa(int data, t_stack *stack);
void	pb(int data, t_stack *stack);
void	rra(t_stack *stack_t);
t_node	*malloc_new_node(int value);



#endif


