/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:57:51 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 18:14:45 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	found_min(t_node *linklist)
{
	t_node	*head;
	int		min;

	head = linklist;
	min = head->value;
	while (head != NULL)
	{
		if (min > head->value)
		{
			min = head->value;
		}
		head = head->next;
	}
	return (min);
}
