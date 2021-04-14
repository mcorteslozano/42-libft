/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:40 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:22:22 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_strchr
	Parameters: const char *s, int c
	Authorized functions: none
	Description: returns a pointer to the first occurrence
    of the character c in the string s.
*/
char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	c = (char)c;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	if (str[i] != c)
		return (0);
	else
		return (str + i);
}
