/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:16 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/13 19:58:41 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL)
	while (s[i] != '\0' || s[i] == c)
	{
		i++;
	}
	if (s[i] == c)
		
	
}