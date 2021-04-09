/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:43 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/09 13:32:43 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst2;
	char			*src2;


	dst2 = (char*)dest;
	src2 = (char*)src;
	if (dst2 || src2)
	{
		i = 0;
		while (i < n)
		{
			dst2[i] = src2[i];
			i++;
		}
		return (dest);
	}
	else
		return (NULL);
}