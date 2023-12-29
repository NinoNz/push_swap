/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:51:29 by alnzohab          #+#    #+#             */
/*   Updated: 2023/03/13 15:37:56 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// concatène deux chaînes de caractères en
// limitant la taille finale de la chaîne concaténée.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_longueur;
	size_t	src_longueur;

	src_longueur = ft_strlen(src);
	dest_longueur = ft_strlen(dst);
	j = dest_longueur;
	i = 0;
	if (dest_longueur < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dest_longueur + i < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (dest_longueur >= dstsize)
		dest_longueur = dstsize;
	return (dest_longueur + src_longueur);
}
