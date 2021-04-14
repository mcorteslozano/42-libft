/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:55:16 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:36:12 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_split
	Parameters: char const *s, char c
	Authorized functions: malloc, free
	Description: reserves memory (with malloc(3)) and returns a
    string table obtained by separating
    s' with the character 'c', which is used as a delimiter.
    delimiter. The table must end with NULL.
*/