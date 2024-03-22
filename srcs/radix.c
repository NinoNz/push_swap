/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:40:06 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/22 17:16:56 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


static int	get_max_bits(t_node *stack)
{
	t_node	*head;
	int		max;
	int		max_bits;

	head = stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
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
	max_bits = get_max_bits(stack->a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = stack->a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack);
			else
				pb(stack->b->value, stack);
		}
		while (ft_lstsize(head_a) != 0)
			pa(stack->a->value, stack);
		i++;
	}
}
