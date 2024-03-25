/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:07:43 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/25 15:28:35 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/push_swap.h"

void delete_node_pa(t_stack *stack)
{
	t_node *tmp;
	
	tmp = stack->b;
	stack->b = tmp->next;
	free(tmp);
}
void	pa(int data, int index, t_stack *stack)
{
	t_node	*tmp;
	t_node *new_node;

	tmp = stack->a;
	new_node = malloc_new_node(data);
	new_node->index = index;
	new_node->next = tmp;
	stack->a = new_node;
	delete_node_pa(stack);
	printf("pa\n");
}

void delete_node_pb(t_stack *stack)
{
	t_node *tmp;
	
	tmp = stack->a;
	stack->a = tmp->next;
	free(tmp);
}
void	pb(int data, int index, t_stack *stack)
{
	printf("===test2====\n");
	t_node	*tmp;
	t_node *new_node;

	tmp = stack->b;
	new_node = malloc_new_node(data);
	new_node->index = index;
	new_node->next = tmp;
	stack->b = new_node;
	delete_node_pb(stack);
	printf("pb\n");
}