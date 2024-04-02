/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:58:04 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 14:31:41 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(t_stack *stack)
{
	int first;
	int second;
	int third;

	first = stack->a->value;
	second = stack->a->next->value;
	third = stack->a->next->next->value;

	if (first > second && second < third && third > first)
		sa(stack);
	else if (first > second && second > third && third < first)
	{
		sa(stack);
		rra(stack);
	}
	else if (first > second && second < third && third < first)
		ra(stack);
	else if (first < second && second > third && third > first)
	{
		sa(stack);
		ra(stack);
	}
	else if (first < second && second > third && third < first)
		rra(stack);
}