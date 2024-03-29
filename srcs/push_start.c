/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:06:45 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/29 15:02:39 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

t_node	*malloc_new_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
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
		printf("%d ", node->a->value);
		node->a = node->a->next;
	}
	printf("\n");
	// Restaurer la valeur originale de node->a
	node->a = lst->a;
}
bool	is_duplicate(t_node *stack, int value)
{
	while (stack != NULL)
	{
		if (stack->value == value)
		{
			return (true); // La valeur existe déjà dans la pile
		}
		stack = stack->next;
	}
	return (false); // La valeur n'existe pas dans la pile
}
t_stack	*fill_stack(char **av, t_stack *stack)
{
	t_node	*tmp;
	int		number;
	int		i;

	// Do parsing/protection error in loop?
	stack->a = malloc_new_node(ft_atoi(av[1]));
	if (!stack->a)
		return (NULL);
	stack->b = NULL;
	tmp = stack->a;
	i = 2;
	while (av[i] != NULL)
	{
		number = ft_atoi(av[i]);
		if (is_duplicate(stack->a, number))
		{
			printf("Error: Duplicate value detected\n");
			return (NULL);
		}
		tmp->next = malloc_new_node(number);
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	set_index(stack->a, ft_lstsize(stack->a));
	return (stack);
}

/*void	ft_test_print(t_stack *stack)
{
	ra(stack);
	sa(stack);
	pb(stack->a->value, stack);
	pa(stack->b->value,stack);
	rra(stack);
}
*/
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
	{
		printf("Error: memory allocation failed\n");
		return (1);
	}
	if (str_pars(av) == false)
		return (1);
	stack = fill_stack(av, stack);
	if (!stack)
	{
		printf("Error in fill_stack");
		free(stack); // Libération de la mémoire allouée avant de quitter
		return (1);
	}
	stack_sort(stack);
	print_node(stack);
	ft_freethood(stack); 
	free(stack); // Libération de la mémoire allouée avant de quitter
	return (0);
}
