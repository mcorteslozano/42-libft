/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:05 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:19:40 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_memcmp
	Parameters: const void *s1, const void *s2, size_t n
	Authorized functions: none
	Description: compares the first n bytes (each
	interpreted as unsigned char) of the memory areas s1 and s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*str1 == *str2 && n-- > 0)
	{
		str1++;
		str2++;
		if (n == 0)
			return (0);
	}
	if (*str1 != *str2)
	{
		return (*str1 - *str2);
	}
	return (0);
}
