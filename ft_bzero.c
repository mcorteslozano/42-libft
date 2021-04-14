/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:33 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:19:19 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_bzero
	Parameters: void *s, size_t n
	Authorized functions: none
	Description: erases the data in the n bytes of the memory
	starting at the location pointed to by s, by writing zeros (bytes
	containing '\0') to that area.
*/
void	ft_bzero(void *s, size_t n)
{
	char	*aux;

	aux = s;
	while (n != 0)
	{
		*aux++ = 0;
		n--;
	}
}
