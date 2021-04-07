/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:40 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/07 22:41:09 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int main()
{
	printf("Función propia: %s\n", ft_strchr("Lets do it!", 's'));
	printf("Función sistema: %s\n", strchr("Lets do it!", 's'));
}