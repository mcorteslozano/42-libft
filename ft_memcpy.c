/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:43 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/08 19:15:24 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dest2;
	char			*src2;


	src2 = (char *)src;
	dest2 = (char *)dest;
	if (n >= 0 && (dest2 || src2))
	{
		i = 0;
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}
