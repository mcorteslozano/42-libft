/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:59 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/09 13:33:16 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char	*little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	if(!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i != len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && (i + j) != len)
			{
				if (big[i + j] != little[j])
					break ;
				j++;
			}
		}
		if (!little[j])
			break ;
		i++;
	}
	if (!little[j])
		return ((char *)&big[i]);
	return (0);
}