/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:51:45 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/07 19:27:02 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
