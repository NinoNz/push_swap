/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:04:10 by alnzohab          #+#    #+#             */
/*   Updated: 2024/01/17 10:01:48 by alnzohab         ###   ########.fr       */
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

/* void ra(t_stack *stack_a){
    // Appeler la fonction utilitaire pour effectuer la rotation à droite.
    do_rotate(stack_a);
    ft_putstr_fd("ra\n", 1);
}
*/
