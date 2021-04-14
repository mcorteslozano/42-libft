/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:08 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:48:18 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_strtrim
	Parameters: char const *s1, char const *set
	Authorized functions: malloc
	Description: reserves memory (with malloc(3)) and returns 
	the string that is a copy of 's1'.
	character string that is a copy of 's1', without the characters
	the characters indicated in the 'set' at the beginning and at the end of the
	at the end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	if (!len)
		return ("");
	return (ft_substr(s1, 0, len + 1));
}
