/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:53:14 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/08 19:52:23 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int numero;
	int negativo;
	int i;

	numero = 0;
	negativo = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			negativo = -negativo;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		numero = numero * 10 + str[i] - 48;
		i++;
	}
	return (numero * negativo);
}
