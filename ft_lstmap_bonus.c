/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:36:01 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/13 13:30:32 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;
	t_list	*aux;

	if (lst) // &&f
	{
		new = ft_lstnew(f(lst->content));
		first = new;
		lst = lst->next;
		while (lst)
		{
			aux = lst->next;
			if (!(new->next = ft__lstnew(f(lst->content))))
				del(lst);
			new = new->next;
			lst = aux;
		}
		return (first);
	}
	return (NULL);
}
