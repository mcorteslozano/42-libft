/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:59 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:23:11 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_strnstr
	Parameters: const char *big, const char *little, size_t len
	Authorized functions: none
	Description: locates the first occurrence of the	null-termi-
    nated string little in the	string big, where not more than	len characters
    are searched.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0' && j + i < len)
			{
				if (big[i + j] == little[j] && little[j + 1] == '\0')
					return ((char *)&big[i]);
				else if (big[i + j] != little[j])
					break ;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
