/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:34:45 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 18:07:42 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_index(t_node *stack, int size)
{
	t_node	*tmp;
	long	min;
	int		i;

	i = 0;
	while (size--)
	{
		min = 2147483647;
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
