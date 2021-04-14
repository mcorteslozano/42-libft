/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:29:13 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/14 18:43:19 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Name: ft_lstadd_back
	Parameters: t_list **lst, t_list *new
	Authorized functions: none
	Description: add the 'new' element at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = (*lst);
	if (current == NULL)
		(*lst) = new;
	else
	{
		current = ft_lstlast(*lst);
		current->next = new;
	}
}
