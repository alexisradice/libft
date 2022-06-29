/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:28:12 by aradice           #+#    #+#             */
/*   Updated: 2022/05/14 18:36:17 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*test;

	test = malloc (sizeof(t_list) * 1);
	if (!test)
		return (NULL);
	test -> content = content;
	test -> next = NULL;
	return (test);
}
