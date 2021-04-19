/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:35 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/19 21:37:51 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_strmapi
	Parameters: char const *s, char (*f)(unsigned int, char)
	Authorized functions: malloc
	Description: applies the function 'f' to each character in the de
	character string 's' to create a new character string (with
	string (with malloc (3)) resulting from successive applications of 'f'.
	from successive applications of 'f'.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen((char *)s);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
