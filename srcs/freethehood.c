/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freethehood.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:13:20 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 18:55:38 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	freestack_a(t_stack *stack)
{
	t_node	*tmp;

	while (stack->a != NULL)
	{
		tmp = stack->a->next;
		free(stack->a);
		stack->a = tmp;
	}
}

void	freestack_b(t_stack *stack)
{
	t_node	*tmp;

	while (stack->b != NULL)
	{
		tmp = stack->b->next;
		free(stack->b);
		stack->b = tmp;
	}
}

void	ft_freethood(t_stack *stack)
{
	freestack_a(stack);
	freestack_b(stack);
	free(stack);
}
