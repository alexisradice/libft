/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:09:03 by aradice           #+#    #+#             */
/*   Updated: 2022/05/14 21:17:42 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t			i;
	unsigned char	*test;

	i = 0;
	test = (unsigned char *)memoryBlock;
	while (i < size)
	{
		if (test[i] == (unsigned char)searchedChar)
			return (test + i);
		i++;
	}
	return (NULL);
}
