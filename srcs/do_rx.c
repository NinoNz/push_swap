/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:07:57 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 12:09:00 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *stack_t)
{
	t_node	*first;
	t_node	*current2;
	t_node	*last;

	if (stack_t->a == NULL || (stack_t->a)->next == NULL)
		return ;
	first = stack_t->a;
	current2 = first->next;
	// Trouver le dernier élément de la pile.
	last = stack_t->a;
	while (last->next != NULL)
	{
		last = last->next;
	}
	// Décaler tous les éléments 1d'une position vers le haut.
	stack_t->a = current2;
	last->next = first;
	first->next = NULL;
	printf("ra\n");
}

void	rb(t_stack *stack_t)
{
	t_node	*first;
	t_node	*current2;
	t_node	*last;

	if (stack_t->b == NULL || (stack_t->b)->next == NULL)
		return ;
	first = stack_t->b;
	current2 = first->next;
	// Trouver le dernier élément de la pile.
	last = stack_t->b;
	while (last->next != NULL)
	{
		last = last->next;
	}
	// Décaler tous les éléments 1d'une position vers le haut.
	stack_t->b = current2;
	last->next = first;
	first->next = NULL;
	printf("ra\n");
}
