/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:08:09 by alnzohab          #+#    #+#             */
/*   Updated: 2024/02/27 16:08:12 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stack)
{
	t_node	*tmp;
	int swap;

	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	tmp = stack->a;
	
	swap = tmp->next->value;
	tmp->next->value = tmp->value;
	tmp->value = swap;
	printf("sa\n");
}                                                                                                                     

void	sb(t_stack *stack)
{
	t_node	*tmp;
	int swap;

	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	tmp = stack->b;
	
	swap = tmp->next->value;
	tmp->next->value = tmp->value;
	tmp->value = swap;
	printf("sb\n");
}  

