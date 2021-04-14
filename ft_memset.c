/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:15 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:19:58 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
	Name: ft_memset
	Parameters: void *b, int c, size_t len
	Authorized functions: none
	Description: fills the first n bytes of the memory area
   	pointed to by s with the constant byte c.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	while (len > 0)
	{
		len--;
		((unsigned char *)b)[len] = (unsigned char)c;
	}
	return (b);
}
