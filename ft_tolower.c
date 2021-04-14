/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:54:14 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:29:00 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_tolower
	Parameters: int c
	Authorized functions: none
	Description: converts the letter c to lower case, if possible.
*/
int	ft_tolower(int c)
{	
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
