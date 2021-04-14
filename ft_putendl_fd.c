/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:56:06 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:40:24 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
	Name: ft_putendl_fd
	Parameters: char *s, int fd
	Authorized functions: write
	Description: writes the character string 's' over the provided
	file descriptor provided, followed by a line break.
	a line break.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
