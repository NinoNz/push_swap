/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:05:30 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 14:33:34 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	found_pos(t_node *linklist, int value)
{
	t_node	*head;
	int		pos;

	head = linklist;
	pos = 0;
	while (head->value != value)
	{
		head = head->next;
		pos++;
	}
	return (pos);
}
