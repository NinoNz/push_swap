/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:07:50 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 14:34:20 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack *stack_t)
{
	t_node	*first;
	t_node	*beforlast;
	t_node	*last;

	if (stack_t->a == NULL || (stack_t->a)->next == NULL)
		return ;
	first = stack_t->a;
	// trouver le dernier élément de la pile.
	last = stack_t->a;
	while (last->next != NULL)
	{
		last = last->next;
	}
	beforlast = stack_t->a;
	while (beforlast->next != last)
	{
		beforlast = beforlast->next;
	}
	// Décaler tous les éléments d'une position vers le bas.
	last->next = first;
	stack_t->a = last;
	beforlast->next = NULL;
	printf("rra\n");
}
