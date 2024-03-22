/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:34:45 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/22 15:36:41 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void set_index(t_node *stack, int size)
{
  t_node *tmp;
  int min;
  int i;
  
  i = 0;
  while (size--)
  {
    min = 2147483647; // max int
    tmp = stack;
    while (tmp)
    {
        if (tmp->value < min && tmp->index == -1)
            min = tmp->value;
        tmp = tmp->next;
    }
    tmp = stack;
    while (tmp)
    {
        if (tmp->value == min && tmp->index == -1)
            tmp->index = i++;
        tmp = tmp->next;
    }
  }  
}