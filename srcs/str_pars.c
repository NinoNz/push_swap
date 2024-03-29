/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_pars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:56:16 by alnzohab          #+#    #+#             */
/*   Updated: 2024/03/29 13:26:23 by alnzohab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

bool	ft_verif_char(char *str)

{
	int i;

	i = 0;
	if (!str)
		return (false);
	while (str[i] != '\0')
	{
		//printf("%c, str\n", str[i]);
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == 45 || str[i] == 43)
			i++;
		else
			return (false);
	}
	if (strlen(str) == 1 && (str[0] == 45 || str[0] == 43))
		return (false);
	return (true);
}

bool	ft_verif_sign(char *str)
{
	int	i;

	i = 0;
	if (!str)
		printf("erreur\n");
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (false);
		i++;
	}
	return (true);
}

bool	str_pars(char **arv)
{
	int i;

	i = 0;
	while (arv[++i] != NULL)
	{
		if ((ft_verif_char(arv[i]) == false)
			|| (ft_verif_sign(arv[i]) == false))
			return (false);
	}
	return (true);
}