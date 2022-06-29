/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 05:45:49 by alexis            #+#    #+#             */
/*   Updated: 2022/05/14 17:51:57 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)pointer1;
	ptr2 = (unsigned char *)pointer2;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)ptr1[i] - (int)ptr2[i]);
		i++;
	}
	return (0);
}
