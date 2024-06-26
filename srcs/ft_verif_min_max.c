/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_min_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:00:04 by alnzohab          #+#    #+#             */
/*   Updated: 2024/04/02 21:15:28 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

bool	ft_verif_min_max(t_node *stack)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->value > INT_MAX || tmp->value < INT_MIN)
			return (true);
		tmp = tmp->next;
	}
	return (false);
}
