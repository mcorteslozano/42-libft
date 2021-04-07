/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:16 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/07 19:37:53 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	x;
	unsigned int	buffer;

	x = 0;
	buffer = 0;
	while (src[x] != '\0')
		x++;
	buffer = x;
	x = 0;
	if (size != 0)
	{
		while (x < size)
		{
			if (x == size - 1)
				dest[x] = 0;
			else
				dest[x] = src[x];
			x++;
		}
	}
	return (buffer);
}
