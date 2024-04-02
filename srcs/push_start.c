/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:06:45 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 14:27:43 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

t_node	*malloc_new_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

static void	print_node(t_stack *lst)
{
	t_stack	*node;

	node = lst;
	while (node->a != NULL)
	{
		printf("%ld ", node->a->value);
		node->a = node->a->next;
	}
	printf("\n");
	// Restaurer la valeur originale de node->a
	node->a = lst->a;
}

bool	is_duplicate(t_node *stack)
{
	t_node	*tmp;
	t_node	*current;

	tmp = stack;
	while (tmp != NULL)
	{
		current = tmp->next;
		while (current != NULL)
		{
			if (tmp->value == current->value)
				return (true); // La valeur existe déjà dans la pile
			current = current->next;
		}
		tmp = tmp->next;
	}
	return (false);
}
t_stack	*fill_stack(char **av, t_stack *stack)
{
	t_node	*tmp;
	int		number;
	int		i;

	// Do parsing/protection error in loop?
	stack->a = malloc_new_node(ft_atol(av[1]));
	if (!stack->a)
		return (NULL);
	stack->b = NULL;
	tmp = stack->a;
	i = 2;
	while (av[i] != NULL)
	{
		number = ft_atol(av[i]);
		tmp->next = malloc_new_node(number);
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	set_index(stack->a, ft_lstsize(stack->a));
	return (stack);
}

static void	stack_sort(t_stack *stack)
{
	printf("test\n");
	if (nb_node(stack->a) <= 5)
		simple_sort(stack);
	else
		radix_sort(stack);
}

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac < 2) // Vérification du nombre d'arguments
		return (1);
	stack = (t_stack *)malloc(1 * sizeof(t_stack));
	if (!stack) // Vérification de l'allocation de mémoire
		return (printf("error0"), EXIT_FAILURE);
	if (str_pars(av) == false)
		return (ft_freethood(stack), printf("error1\n"), EXIT_FAILURE);
	stack = fill_stack(av, stack);
	if (!stack)
		return (free(stack), printf("error2\n"), EXIT_FAILURE);
	if (ft_verif_min_max(&stack->a) == true)
		return (ft_freethood(stack), printf("error3\n"), EXIT_FAILURE);
	if (is_duplicate(stack->a))
		return (ft_freethood(stack), printf("error4"), EXIT_FAILURE);
	stack_sort(stack);
	print_node(stack);
	ft_freethood(stack);
	return (0);
}
