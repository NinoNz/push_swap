/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:40:06 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/25 16:41:42 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


static int	get_max_bits(t_stack *stack)
{
	t_node	*head;
	int		max;
	int		max_bits;

	head = stack->a;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	printf("====Test5=====\n");
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack *stack)
{
	t_node	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_a = stack->a;
	size = ft_lstsize(head_a);
	max_bits = get_max_bits(stack);
	printf("====Test4=====\n");
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = stack->a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack);
			else
				pb(stack->b->value, stack->b->index, stack);
		}
		while (ft_lstsize(head_a) != 0)
			pa(stack->a->value, stack->a->index, stack);
		i++;
	}
}
