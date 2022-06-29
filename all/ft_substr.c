/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:28:29 by aradice           #+#    #+#             */
/*   Updated: 2022/05/17 18:06:51 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*val;
	unsigned int	i;
	size_t			size;

	i = start;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	if (len + start > size)
		size = size - start;
	else
		size = len;
	val = malloc(sizeof(char) * (size + 1));
	if (!val)
		return (NULL);
	i = 0;
	while (i < size)
	{
		val[i] = s[start + i];
		i++;
	}
	val[i] = '\0';
	return (val);
}
