/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:01 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:47:41 by mcortes-         ###   ########.fr       */
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
	concatenation of 's1' and 's2'.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = malloc(sizeof(char) * (i + j + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++ && j++;
	}
	str[i] = '\0';
	return (str);
}
