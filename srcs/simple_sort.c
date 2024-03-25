/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:17:11 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/22 19:02:50 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*head;

	head = stack->a;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	simple_sort(t_stack *stack)
{
	printf("test2\n");
	size_t size;

	if (is_sorted(stack) || nb_node(stack->a) == 0 || nb_node(stack->a) == 1)
		return ;
	size = nb_node(stack->a);
	if (size == 2)
		sa(stack);
	else if (size == 3)
		sort_3(stack);
	else if (size == 4 || size == 5)
		sort_4_5(stack);
} 