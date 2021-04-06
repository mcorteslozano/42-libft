/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:16 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/06 17:07:00 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int buffer;

	x = 0;
	buffer = 0;
	while (src[x] != '\0')
		x++;
	buffer = x;
	x = 0;
	if (size != 0)
	{
		while (x < size)
		{
			if (x == size - 1)
				dest[x] = 0;
			else
				dest[x] = src[x];
			x++;
		}
	}
	return (buffer);
}