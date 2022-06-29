/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:17:48 by aradice           #+#    #+#             */
/*   Updated: 2022/05/17 21:00:23 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelement;

	if (!lst)
		return (NULL);
	newlist = ft_lstnew (f(lst->content));
	if (!newlist)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		newelement = ft_lstnew(f(lst->content));
		if (!newelement)
		{
			ft_lstclear (&newlist, del);
			return (NULL);
		}	
		ft_lstadd_back (&newlist, newelement);
		lst = lst->next;
	}
	return (newlist);
}
