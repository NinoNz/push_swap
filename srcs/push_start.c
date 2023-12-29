/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:46:19 by alnzohab          #+#    #+#             */
/*   Updated: 2023/12/29 16:17:08 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"


t_stack *malloc_new_node(int value) {
    t_stack *new_node;
    
    new_node = malloc(sizeof(t_stack));
    if (!new_node)
        return NULL;
    
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

void ft_free_list(t_stack *head)
{
    t_stack *tmp;
    
    tmp = head;
    while (tmp != NULL)
    {
        head = head->next;
        free(tmp);
        tmp = head;
    }
}

t_stack *fill_stack(char **av)
{
    t_stack *stack;
    t_stack *tmp;
    int number;
    int i;
    // Do parsing/protection error in loop?
    stack = malloc_new_node(ft_atoi(av[1]));
    if (!stack)
        return NULL;
    tmp = stack;
    i = 2;
    while (av[i] != NULL) 
    {
        number = ft_atoi(av[i]);
        tmp->next = malloc_new_node(number);
        if (!tmp->next)
            return NULL;
        tmp = tmp->next;
        i++;
    }
    
    return stack;
}


void ft_test_print(t_stack *stack)
{
    t_stack *tmp;

    printf("---- BEFORE ----\n");
    tmp = stack;
    while(tmp != NULL)
    {
        printf("%d\n", tmp->value);
        tmp = tmp->next;
    }

    printf("---- MOVEMENT ----\n");
    sa(stack);

    printf("---- AFTER ----\n");
    tmp = stack;
    while(tmp != NULL)
    {
        printf("%d\n", tmp->value);
        tmp = tmp->next;
    }

    ft_free_list(stack);
}

int main(int ac, char **av)
{
    t_stack *stack_a;
    // t_stack *stack_b;

    if (ac < 2) { // nb argument
        printf("Error: no argument given\n");
        return 1;
    }
    
    stack_a = fill_stack(av);
    if (!stack_a) {
        printf("Error in fill_stack");
        return 1;
    }

    ft_test_print(stack_a);
    // ft_test_print(stack_b);

    return 0;
}

// int main()
// {
//     t_stack *stack = NULL;

//     t_stack *head;
//     t_stack *node2;
//     t_stack *node3;

    
//     head = malloc_new_node(10);
//     node2 = malloc_new_node(11);
//     node3 = malloc_new_node(12);
    
//     head->next = node2; 
//     node2->next = node3;

//     stack = head;
//     while (stack != NULL) 
//     {
//         printf("%d\n", stack->data);
//         stack = stack->next;
//     }
//     ft_free_list(head);
// }

// fuck push_swap