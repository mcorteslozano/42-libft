/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:43 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:19:44 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_memcpy
	Parameters: void *dest, const void *src, size_t n
	Authorized functions: none
	Description: copies n bytes from memory area src to
	memory area dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst2;
	char			*src2;

	dst2 = (char *)dest;
	src2 = (char *)src;
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
