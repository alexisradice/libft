/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:10:06 by aradice           #+#    #+#             */
/*   Updated: 2022/04/01 17:10:06 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (first[i] && second[i] && i < size)
	{
		if (first[i] != second[i])
			return ((int)(unsigned char)first[i] -
					(int)(unsigned char)second[i]);
		i++;
	}
	if (i == size)
		return (0);
	else
		return ((int)(unsigned char)first[i] - (int)(unsigned char)second[i]);
}
