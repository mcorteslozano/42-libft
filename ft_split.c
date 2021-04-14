/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:16 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 20:13:56 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_split
	Parameters: char const *s, char c
	Authorized functions: malloc, free
	Description: reserves memory (with malloc(3)) and returns a
    string table obtained by separating
    s' with the character 'c', which is used as a delimiter.
    delimiter. The table must end with NULL.
*/

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (*s)
	{
		i++;
		s++;
	}
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	while (*s && *s != c)
		s++;
	i = 0;
	while (*s && *s == c)
	{
		new[i] = *s;
		i++;
	}
	new[i] = '\0';
	return (*new);
}