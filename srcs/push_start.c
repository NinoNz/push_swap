/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:06:45 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/03 11:58:38 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

t_node	*malloc_new_node(long value)
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
				return (true);
			current = current->next;
		}
		tmp = tmp->next;
	}
	return (false);
}

t_stack	*fill_stack(char **av, t_stack *stack)
{
	t_node	*tmp;
	long	number;
	int		i;

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
	if (nb_node(stack->a) <= 5) {
		simple_sort(stack);
	} else if (is_sorted(stack)) {
		return ;
	} else {
		radix_sort(stack);
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac < 2)
		return (1);
	stack = (t_stack *)malloc(1 * sizeof(t_stack));
	if (!stack)
		return (ft_putendl_fd("Error", 2), EXIT_FAILURE);
	if (str_pars(av) == false)
		return (free(stack), ft_putendl_fd("Error", 2), EXIT_FAILURE);
	stack = fill_stack(av, stack);
	if (!stack)
		return (free(stack), ft_putendl_fd("Error", 2), EXIT_FAILURE);
	if (ft_verif_min_max(stack->a) == true)
		return (ft_freethood(stack), ft_putendl_fd("Error", 2), EXIT_FAILURE);
	if (is_duplicate(stack->a))
		return (ft_freethood(stack), ft_putendl_fd("Error", 2), EXIT_FAILURE);
	stack_sort(stack);
	ft_freethood(stack);
	return (0);
}
