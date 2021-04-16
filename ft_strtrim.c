/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:08 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/16 18:59:40 by mcortes-         ###   ########.fr       */
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
	int		i;
	int		j;
	char	*aux;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	i = 0;
	j = len - 1;
	while (ft_strchr(set, s1[i]) != NULL && i <= len / 2)
		i++;
	while (ft_strchr(set, s1[j]) != NULL && j >= len / 2)
		j--;
	if (i >= j)
	{
		aux = (char *)malloc(1);
		if (!aux)
			return (0);
		aux[0] = '\0';
		return (aux);
	}
	else
		len = j - i;
	return (ft_substr(s1, i, len + 1));
}
