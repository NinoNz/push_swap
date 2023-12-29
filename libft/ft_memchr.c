/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:44:48 by alnzohab          #+#    #+#             */
/*   Updated: 2023/03/13 15:20:11 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// recherche la première occurrence d'un octet
//spécifique dans une zone de mémoire.
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
