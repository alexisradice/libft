/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:07:50 by aradice           #+#    #+#             */
/*   Updated: 2022/04/01 17:07:50 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*test;

	if (elementSize != 0 && elementCount > SIZE_MAX / elementSize)
		return (NULL);
	test = malloc (elementCount * elementSize);
	if (!test)
		return (NULL);
	ft_bzero (test, elementCount * elementSize);
	return (test);
}
