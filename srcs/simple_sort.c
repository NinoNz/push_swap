/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:17:11 by alnzohab          #+#    #+#             */
/*   Updated: 2024/02/26 15:29:56 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int is_sorted(t_stack *stack)
{

	t_node *head;

	head = stack->a;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void simple_sort(t_stack *stack)
{
	int size;

	if (is_sorted(stack->a) || nb_node(stack->a) == 0 
		|| nb_node(stack->a) == 1)
		return ;
	size = nb_node(*stack->a);
	if (size == 2)
		sa(stack->a);
	else if (size == 3)
		sort_3(stack->a);
		
		

}