/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:53:58 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/06 19:42:15 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	if(c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

int main()
{
    char c = '\n';
    printf("Función propia: %d ", ft_isprint(c));
    printf("Función sistema: %d ", isprint(c));
}