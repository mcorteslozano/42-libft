/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <mcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:24:56 by mcortes-          #+#    #+#             */
/*   Updated: 2021/04/12 19:01:03 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft__lstnew(void *content)
{
	void    *cont;
    t_list  *new;

    cont = (void *)content;
    if(!(new = malloc(sizeof(t_list))))
        return (NULL);
    new->content = cont;
    new->next = NULL;
    return (new);
}
