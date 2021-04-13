/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:26 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/13 17:56:23 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	value(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	long	m;

	m = n;
	i = value(m);
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if (m < 0)
	{
		s[0] = '-';
		m *= -1;
	}
	if (m == 0)
		s[0] = 48;
	while (m > 0)
	{
		s[i] = m % 10 + '0';
		m /= 10;
		i--;
	}
	return (s);
}
