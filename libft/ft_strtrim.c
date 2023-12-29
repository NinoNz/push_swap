/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:28:37 by alnzohab          #+#    #+#             */
/*   Updated: 2023/03/13 17:14:26 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_compare(const char s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		first;
	int		end;
	char	*copy;
	int		i;

	first = 0;
	end = ft_strlen(s1) - 1;
	while (s1[first] && ft_compare(s1[first], set) == 1)
		first++;
	while (end >= first && ft_compare(s1[end], set) == 1)
		end--;
	copy = malloc(sizeof(char) * (end - first) + 2);
	if (!copy)
		return (0);
	i = 0;
	while (first <= end)
	{
		copy[i] = s1[first];
		i++;
		first++;
	}
	copy[i] = '\0';
	return (copy);
}
