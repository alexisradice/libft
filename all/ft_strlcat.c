/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:09:54 by aradice           #+#    #+#             */
/*   Updated: 2022/04/01 17:09:55 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	dstsize = 0;
	srcsize = 0;
	i = 0;
	while (destination[dstsize] && dstsize < size)
		dstsize++;
	while (source[srcsize])
		srcsize++;
	i = 0;
	if (size <= dstsize)
		return (srcsize + size);
	while (source[i] && dstsize + i < size - 1)
	{
		destination[dstsize + i] = source[i];
		i++;
	}
	destination[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
