/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:53:07 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/07 22:45:28 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*str1;
	unsigned char		*str2;
	unsigned int		i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if(n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] && s2[i] && i < (n - 1))
		i++;
	return (str1[i] - str2[i]);
}

int main()
{
	printf("Función propia: %d\n", ft_strncmp("Lets do it!", "Lets do it, Mario!", 15));
	printf("Función sistema: %d\n", strncmp("Lets do it!", "Lets do it, Mario!", 15));
}