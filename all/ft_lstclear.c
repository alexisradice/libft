/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:08:44 by aradice           #+#    #+#             */
/*   Updated: 2022/05/14 17:16:27 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*test;
	t_list	*tmp;

	test = *lst;
	while (test)
	{
		tmp = test->next;
		ft_lstdelone(test, del);
		test = tmp;
	}
	*lst = NULL;
}
