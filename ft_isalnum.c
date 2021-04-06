/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:53:38 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/06 19:39:12 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalnum(int c)
{
    if (c > 64 && c < 91)
        return (1);
    else if (c > 96 && c < 123)
        return (1);
    else if (c > 47 && c < 58)
        return (1);
    else
        return (0);
}

int main()
{
    char c = '5';
    printf("Función propia: %d ", ft_isalnum(c));
    printf("Función sistema: %d ", isalnum(c));
}