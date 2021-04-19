/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:01 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/19 21:38:45 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_strjoin
	Parameters: char const *s1, char const *s2
	Authorized functions: malloc
	Description: reserves memory (with malloc(3)) and returns the new
	string resulting from the
	new string resulting from the concatenation of 's1' and 's2'.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*aux;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	aux = (char *)malloc(len1 + len2 + 1);
	if (!aux)
		return (NULL);
	while (i < len1 || i < len2)
	{
		if (i < len1)
			aux[i] = s1[i];
		if (i < len2)
			aux[i + len1] = s2[i];
		i++;
	}
	aux[len1 + len2] = '\0';
	return (aux);
}
