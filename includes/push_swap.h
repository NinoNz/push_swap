/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:07:10 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 13:55:03 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_node
{
	int				index;
	long			value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*a;
	t_node			*b;
}					t_stack;

void				sa(t_stack *stack_a);
void				sb(t_stack *stack_b);
void				ra(t_stack *stack);
void				ss(t_stack *stack);
void				pa(int data, int index, t_stack *stack);
void				pb(int data, int index, t_stack *stack);
void				rra(t_stack *stack_t);
t_node				*malloc_new_node(int value);
void				simple_sort(t_stack *stack);
int					is_sorted(t_stack *stack);
void				sort_3(t_stack *stack);
size_t				nb_node(t_node *stack_node);
void				sort_4_5(t_stack *stack);
int					found_pos(t_node *linklist, int value);
int					found_min(t_node *linklist);
void				set_index(t_node *stack, int size);
void				radix_sort(t_stack *stack);
int					ft_lstsize(t_node *stack);
bool				str_pars(char **arv);
void				ft_freethood(t_stack *stack);
void				free_list(t_node *head);
bool				is_duplicate(t_node *stack);
bool				ft_is_space(char *str);
long				ft_atol(const char *nptr);
bool				ft_verif_min_max(t_node **stack);
#endif
