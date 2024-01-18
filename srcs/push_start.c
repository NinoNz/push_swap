/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:46:19 by alnzohab          #+#    #+#             */
/*   Updated: 2024/01/18 11:43:53 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

t_node	*malloc_new_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
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
		tmp->next = malloc_new_node(number);
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (stack);
}

void	ft_test_print(t_stack *stack)
{
	t_node	*tmp;

	printf("---- BEFORE (A) ----\n");
	tmp = stack->a;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	printf("---- BEFORE (B) ----\n");
	tmp = stack->b;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	printf("---- MOVEMENT ----\n");
	ra(stack);
	sa(stack);
	pb(stack->a->value, stack);
	pa(stack->b->value,stack);
	printf("---- AFTER (A) ----\n");
	tmp = stack->a;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	printf("---- AFTER (b) ----\n");
	tmp = stack->b;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	// ft_free_list(stack->a);
}

int	main(int ac, char **av)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(1 * sizeof(t_stack));
	
	if (ac < 2)
	{ // nb argument
		printf("Error: no argument given\n");
		return (1);
	}
	stack = fill_stack(av, stack);
	if (!stack)
	{
		printf("Error in fill_stack");
		return (1);
	}
	ft_test_print(stack);
	// ft_test_print(stack_b);
	return (0);
}
