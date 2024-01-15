/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:18:15 by user              #+#    #+#             */
/*   Updated: 2024/01/13 19:00:32 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stack)
{
	t_node	*tmp;

	if (stack->b == NULL)
		return ;
	tmp = stack->a;
	stack->a = (t_node *) stack->b;
	stack->a->next = tmp;
	stack->b = NULL;
	printf("pa\n");
}