/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:50 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/12 17:41:12 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	c = (char)c;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0 && str[i] != c)
	{
		i--;
	}
	if (str[i] != c)
		return (0);
	else
		return (str + i);
}
