/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:07:43 by alnzohab          #+#    #+#             */
/*   Updated: 2023/12/29 16:14:55 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	do_swap(t_stack *stack)
{
	int	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
}

void sa(t_stack *stack_a) {
    do_swap(stack_a);
    ft_putstr_fd("sa\n", 1);
}

void sb(t_stack *stack_b) {
    do_swap(stack_b);
    ft_putstr_fd("sb\n", 1);
}