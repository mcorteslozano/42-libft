/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:53:14 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/19 12:49:18 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_atoi
	Parameters: const char *str
	Authorized functions: none
	Description: converts the initial portion of the 
	string pointed to by str to int. 
*/
int	ft_atoi(const char *str)
{
	unsigned long long	resultado;
	int					negativo;
	int					i;

	resultado = 0;
	negativo = 1;
	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32))
		i++;
	if (str[i] == '-')
		negativo *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((resultado > __LONG_LONG_MAX__) || (i >= 19))
		{
			if (negativo == 1)
				return (-1);
			else
				return (0);
		}
		resultado = resultado * 10 + (str[i++] - 48);
	}
	return (resultado * negativo);
}
