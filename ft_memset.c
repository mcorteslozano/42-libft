/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:50:15 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/06 19:30:00 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    while (len > 0)
    {
        len--;
        ((unsigned char *)b)[len] = (unsigned char)c;
    }
    return (b);
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nAntes de ft_memset(): %s\n", str);
    ft_memset(str + 13, '.', 8*sizeof(char));
    printf("Después ft_memset():  %s", str);
    return 0;
}