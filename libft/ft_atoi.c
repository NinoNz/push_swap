/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:53:52 by alnzohab          #+#    #+#             */
/*   Updated: 2023/03/13 19:31:37 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La fonction ft_atoi convertit une chaîne de caractères en un entier signé.
int	ft_atoi(const char *nptr)
{
	int	i;
	int	number;
	int	switchh;

	i = 0;
	number = 0;
	switchh = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		switchh *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number *= 10;
		number += (nptr[i] - 48);
		i++;
	}
	return (number * switchh);
}
