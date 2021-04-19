/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:24:56 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:41:30 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_lstnew
	Parameters: void *content
	Authorized functions: malloc
	Description: reserves memory (with malloc(3)) and returns a new element.
	element. The variable 'content' is initialized
	by the value of the 'content' parameter. The
	variable 'next' is initialized with NULL.
*/
t_list	*ft_lstnew(void *content)
{
	void	*cont;
	t_list	*new;

	cont = (void *)content;
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = cont;
	new->next = NULL;
	return (new);
}
