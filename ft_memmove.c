/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:51:26 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/12 17:37:34 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest2;
	const unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	if (dest2 || src2)
	{
		if (src2 < dest2)
			while (++i <= len)
				dest2[len - i] = src2[len - i];
		else
			while (len-- > 0)
				*(dest2++) = *(src2++);
		return (dest);
	}
	else
		return (NULL);
}
