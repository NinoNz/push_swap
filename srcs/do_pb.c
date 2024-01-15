/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:32:22 by user              #+#    #+#             */
/*   Updated: 2024/01/12 22:33:09 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->b;
	stack->b = (t_node *) stack->a;
	stack->b->next = tmp;
	stack->a = NULL;
	printf("pb\n");
}