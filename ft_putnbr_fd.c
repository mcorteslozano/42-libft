/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:56:15 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:40:13 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
	Name: ft_putnbr_fd
	Parameters: int n, int fd
	Authorized functions: write
	Description: writes the integer 'n' over the file descriptor provided.
	file descriptor provided.
*/
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
