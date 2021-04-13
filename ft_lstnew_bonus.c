/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:24:56 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/13 17:58:49 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
