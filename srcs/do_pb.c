/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:32:22 by user              #+#    #+#             */
/*   Updated: 2024/01/17 13:42:24 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void delete_node_pb(t_stack *stack)
{
	t_node *tmp;
	
	tmp = stack->a;
	stack->a = tmp->next;
	free(tmp);
}
void	pb(int data, t_stack *stack)
{
	t_node	*tmp;
	t_node *new_node;

	tmp = stack->b;
	new_node = malloc_new_node(data);
	new_node->next = tmp;
	stack->b = new_node;
	delete_node_pb(stack);
	printf("pb\n");
}