/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:51:13 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:20:19 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_memccpy
	Parameters: void *dest, const void *src, int c, size_t n
	Authorized functions: none
	Description: copies no more than n bytes from memory
	area src to memory area dest, stopping when the character c is
	found.
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	while (n-- > 0)
	{
		*b = *a;
		if (*a == (unsigned char)c)
			return ((void *)b + 1);
		a++;
		b++;
	}
	return (NULL);
}
