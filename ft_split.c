/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:16 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/19 21:34:52 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_split
	Parameters: char const *s, char c
	Authorized functions: malloc, free
	Description: reserves memory (with malloc(3)) and returns a
	string auxle obtained by separating
	s' with the character 'c', which is used as a delimiter.
	delimiter. The auxle must end with NULL.
*/
static size_t	ft_count(char const *s, char c)
{
	int		i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	int		i;
	size_t	j;
	int		start;

	if (!s)
		return (NULL);
	aux = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!aux)
		return (NULL);
	i = 0;
	j = 0;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			aux[j++] = ft_substr(s, start, i - start);
		}
		i++;
	}
	aux[j] = NULL;
	return (aux);
}
