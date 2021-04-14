/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:51:45 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:19:35 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_memchr
	Parameters: const void *s, int c, size_t n
	Authorized functions: none
	Description: scans the initial n bytes of the memory
	area pointed to by s for the first instance of c.  Both c and the
	bytes of the memory area pointed to by s are interpreted as
	unsigned char.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	while (n-- > 0)
	{
		str = (unsigned char *)s;
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		s++;
	}
	return (NULL);
}
