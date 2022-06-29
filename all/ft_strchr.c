/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 05:45:58 by alexis            #+#    #+#             */
/*   Updated: 2022/05/12 19:19:39 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i] && string[i] != (unsigned char)searchedChar)
		i++;
	if (string[i] == (unsigned char)searchedChar)
		return ((char *)string + i);
	else
		return (NULL);
}
