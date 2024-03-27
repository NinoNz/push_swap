/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:07:10 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/26 20:37:18 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>

typedef struct  s_node
{
    int index;
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
void ra(t_stack *stack);
void ss(t_stack *stack);
//void	pa(int data, t_stack *stack);
void	pa(int data, int index, t_stack *stack);
//void	pb(int data, t_stack *stack);
void pb(int data, int index ,t_stack *stack);
void	rra(t_stack *stack_t);
t_node	*malloc_new_node(int value);
void simple_sort(t_stack *stack);
int is_sorted(t_stack *stack);
void sort_3(t_stack *stack);
size_t nb_node(t_node *stack_node);
void	sort_4_5(t_stack *stack);
int found_pos(t_node *linklist, int value);
int found_min(t_node *linklist);
void set_index(t_node *stack, int size);
void	radix_sort(t_stack *stack);
int	ft_lstsize(t_node *stack);


#endif
