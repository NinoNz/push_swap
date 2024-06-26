/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:07:43 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 18:17:07 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	delete_node_pa(t_stack *stack)
{
	t_node	*tmp;

	if (stack->b)
	{
		tmp = stack->b;
		stack->b = tmp->next;
		free(tmp);
	}
}

void	pa(long data, int index, t_stack *stack)
{
	t_node	*tmp;
	t_node	*new_node;

	tmp = stack->a;
	new_node = malloc_new_node(data);
	new_node->index = index;
	new_node->next = tmp;
	stack->a = new_node;
	delete_node_pa(stack);
	printf("pa\n");
}

void	delete_node_pb(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->a;
	stack->a = tmp->next;
	free(tmp);
}

void	pb(long data, int index, t_stack *stack)
{
	t_node	*tmp;
	t_node	*new_node;

	tmp = stack->b;
	new_node = malloc_new_node(data);
	new_node->index = index;
	new_node->next = tmp;
	stack->b = new_node;
	delete_node_pb(stack);
	printf("pb\n");
}
