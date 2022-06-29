/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:09:58 by aradice           #+#    #+#             */
/*   Updated: 2022/04/01 17:09:58 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = ft_strlen(source);
	if (size > 0)
	{
		while (source[i] != '\0' && i < size - 1)
		{
			destination[i] = source[i];
			i++;
		}
	}
	if (size != 0)
		destination[i] = '\0';
	return (y);
}
