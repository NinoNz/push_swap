/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:18:15 by user              #+#    #+#             */
/*   Updated: 2024/01/18 11:43:17 by alnzohab         ###   ########.fr       */
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
void	pa(int data, t_stack *stack)
{
	t_node	*tmp;
	t_node *new_node;

	tmp = stack->a;
	new_node = malloc_new_node(data);
	new_node->next = tmp;
	stack->a = new_node;
	delete_node_pa(stack);
	printf("pa\n");
}