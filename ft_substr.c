/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:54:51 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:48:32 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_substr
	Parameters: char const *s, unsigned int start, size_t len
	Authorized functions: malloc
	Description: reserves memory (with malloc(3)) and returns the 
	string from the string
	string that comes from the string passed as argument.
	This new string starts at the index 'start' and has a maximum size of 'len'.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			l;

	i = 0;
	l = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	l = ft_strlen(s) + start;
	if (l < len)
		len = l;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
