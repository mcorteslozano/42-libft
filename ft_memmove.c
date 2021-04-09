/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:51:26 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/09 13:32:30 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	if (dest2 || src2)
	{
		if (src2 < dest2)
			while (++i <= n)
				dest2[n - 1] = src2[n - 1];
		else
			while (n-- > 0)
				*(dest2++) = *(src2++);
		return (dest);
	}
	else
		return (NULL);
}
