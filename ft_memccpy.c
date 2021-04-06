/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:51:13 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/06 20:01:27 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
    unsigned char *a;
    unsigned char *b;

    a = (unsigned char*)src;
    b = (unsigned char*)dest;
    while (n-- > 0)
    {
        *b = *a;
        if(*a == (unsigned char)c)
            return ((void*)b + 1);
        a++;
        b++;
    }
    return (NULL);
}

int main()
{
    char *src = "Este es el string: no copiado";
    char dest[80];

    printf("Función propia: %s\n", ft_memccpy(dest, src, ':', 80));
    printf("Función sistema: %s\n", memccpy(dest, src, ':', 80));

}