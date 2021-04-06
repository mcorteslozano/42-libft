/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:43 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/06 23:07:51 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	char *a;
    char *b;

    a = (char*)src;
    b = (char*)dest;
    while (n--)
    {
        *b++ = *a++;
    }
    return (dest);
}