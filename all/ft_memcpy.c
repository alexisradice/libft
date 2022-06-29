/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 05:45:51 by alexis            #+#    #+#             */
/*   Updated: 2022/05/14 18:57:09 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (destination == NULL && source == NULL)
		return (NULL);
	i = 0;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (destination);
}
