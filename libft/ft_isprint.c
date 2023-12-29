/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:30:29 by alnzohab          #+#    #+#             */
/*   Updated: 2023/03/13 10:35:23 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// vérifie si un caractère est un caractère imprimable ou non.
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
