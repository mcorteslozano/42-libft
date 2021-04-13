/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:54:30 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/13 13:36:40 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*ptr;
	size_t		i;

	i = 0;
	if (!(ptr = malloc(size * nmemb)))
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*

	char	*p;
	size_t	i;

	i = 0;
	if (!(p = malloc(size * count)))
		return (NULL);
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return (p); 

*/