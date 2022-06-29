/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:09:48 by aradice           #+#    #+#             */
/*   Updated: 2022/05/14 19:15:49 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (source[len])
		len++;
	str = (char *)malloc (sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = source[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
