/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:16 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:20:04 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_strlcpy
	Parameters: char *dest, char *src, size_t size
	Authorized functions: none
	Description: copies up to size - 1 characters from the NUL-terminated 
	string src to dst, NUL-terminating the result.
*/
size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (src[j] != '\0')
		j++;
	if (size == 0)
		return (j);
	while (i != size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
	{
		dest[i] = '\0';
	}
	return (j);
}
