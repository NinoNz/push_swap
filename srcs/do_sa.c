/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:07:43 by alnzohab          #+#    #+#             */
/*   Updated: 2024/01/12 20:48:45 by user             ###   ########.fr       */
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

