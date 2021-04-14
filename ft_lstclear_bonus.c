/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:32:37 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:47:18 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_lstclear
	Parameters: t_list **lst, void (*del)(void *)
	Authorized functions: free
	Description: deletes and frees the memory of the element 
	passed as parameter and all following elements.
	as parameter and all following elements, with 'del' and free (3)
	Finally, the initial pointer must be set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
}
