/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:38:25 by alnzohab          #+#    #+#             */
/*   Updated: 2023/03/13 15:41:33 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// convertit un caractère en minuscule.
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}
