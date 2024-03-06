/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_node.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:08:18 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/05 17:09:11 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

// return la taille de la linked List
size_t nb_node(t_node *stack_node)
{
    size_t i;
    t_node *tmp;

    tmp = stack_node;
    i = 0;
    while (tmp != NULL)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}