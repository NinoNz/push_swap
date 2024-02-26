/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_node.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:26:48 by alnzohab          #+#    #+#             */
/*   Updated: 2024/02/26 13:46:32 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// return la taille de la linked List
void nb_node(t_stack *stack)
{
    size_t i;
    t_node *tmp;

    tmp = stack;
    i = 0;
    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}