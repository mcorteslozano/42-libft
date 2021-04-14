/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:53:07 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:24:11 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_strncmp
	Parameters: const char *s1, const char *s2, size_t n
	Authorized functions: none
	Description: similar than ft_strcmp, except it compares only the
    first (at most) n bytes of s1 and s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*str1;
	unsigned char		*str2;
	unsigned int		i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] && s2[i] && i < (n - 1))
		i++;
	return (str1[i] - str2[i]);
}
