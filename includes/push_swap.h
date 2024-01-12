/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:46:49 by alnzohab          #+#    #+#             */
/*   Updated: 2024/01/12 10:15:53 by alnzohab         ###   ########.fr       */
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

#endif


