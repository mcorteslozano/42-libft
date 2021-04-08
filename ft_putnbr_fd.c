/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:56:15 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/08 19:01:40 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		m;
	int		i;
	char	c;

	i = 1;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	m = n;
	while (m > 9)
	{
		m /= 10;
		i *= 10;
	}
	while (i != 0)
	{
		c = ((n / i) % 10) + '0';
		write(fd, &c, 1);
		i /= 10;
	}
}
