/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:54:30 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/19 21:38:51 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_calloc
	Parameters: size_t nmemb, size_t size
	Authorized functions: malloc
	Description: allocates memory for an array of nmemb elements of 
	size bytes each and returns a pointer to the allocated memory.
	The memory is set to zero.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*ptr;
	size_t		i;

	ptr = malloc(size * nmemb);
	i = 0;
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
