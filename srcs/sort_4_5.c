/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:19:22 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/05 19:29:45 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_4_5(t_stack *stack)
{

	int repeat_nb;

	repeat_nb = nb_node(stack->a) - 3;

	while (repeat_nb != 0)
	{
		while (trouver_pos(stack->a, trouver_min(stack->a)) != 0)
		{
            if (trouver_pos(stack->a, trouver_min(stack->a)) <= 2)
                ra(stack);
            else
                rra(stack);
		}
		pb(stack->a->value, stack);
		repeat_nb--;
	}
    sort_3(stack);
    while(nb_node(stack->b) != 0)
    {
        pa(stack->b->value, stack);
    }
}