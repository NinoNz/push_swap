/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:06:45 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/06 16:11:50 by alnzohab         ###   ########.fr       */
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
	new_node->index = -1;
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
	if (nb_node(stack->a) <= 5)
		simple_sort(stack);
	else
		radix_sort(stack);
}

int	main(int ac, char **av)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(1 * sizeof(t_stack));
	
	if (ac < 2) // nb argument
	{ 
		printf("Error: no argument given\n");
		return (1);
	}
	stack = fill_stack(av, stack);
	if (!stack)
	{
		printf("Error in fill_stack");
		return (1);
	}
	stack_sort(stack);
	//radix_sort(stack);
	//ft_test_print(stack);
	
	return (0);
}
