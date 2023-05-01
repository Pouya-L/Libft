/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:21:08 by plashkar          #+#    #+#             */
/*   Updated: 2023/05/01 13:28:58 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*element;

	if (!f || !lst)
		return (NULL);
	newlist = NULL;
	element = NULL;
	while (lst)
	{
		element = ft_lstnew((*f)(lst->content));
		if (!element)
			ft_lstclear(&newlist, del);
		ft_lstadd_back(&newlist, element);
		lst = lst->next;
	}
	return (newlist);
}
