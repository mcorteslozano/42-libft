/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:53:07 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/07 19:59:48 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{

}

int main()
{
	printf("Función propia: %d\n", ft_strncmp("Lets do it!", "Lets do it, Mario!", 15));
	printf("Función sistema: %d\n", strncmp("Lets do it!", "Lets do it, Mario!", 15));
}