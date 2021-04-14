/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:48 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:40:27 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
	Name: ft_putchar_fd
	Parameters: char c, int fd
	Authorized functions: write
	Description: type the character 'c' over the file descriptor provided.
	file descriptor provided.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
