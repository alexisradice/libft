/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:09:21 by aradice           #+#    #+#             */
/*   Updated: 2022/04/01 17:09:21 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	if (!source && !destination)
		return (NULL);
	i = 0;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	if (s < d)
	{
		while (size--)
			d[size] = s[size];
	}
	else
	{
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (destination);
}
