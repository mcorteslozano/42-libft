/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:28 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:19:09 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_strlcat
	Parameters: char *dst, const char *src, size_t dstsize
	Authorized functions: none
	Description: appends the NUL-terminated string src to the end of dst.
	It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		h;
	size_t		len;

	h = ft_strlen(dst);
	if (dstsize < h)
		h = dstsize;
	len = dstsize - h;
	if (!len)
		return (h + ft_strlen(src));
	i = 0;
	j = h;
	while (j + 1 < dstsize && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(src) + h);
}
