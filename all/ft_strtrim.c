/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:41:54 by aradice           #+#    #+#             */
/*   Updated: 2022/05/17 21:03:06 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	y;
	int	len;

	y = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen (s1);
	while (s1 && ft_strchr (set, s1[y]))
	{
		y++;
	}
	while (len - 1 > 0 && ft_strchr (set, s1[len - 1]))
	{
		len--;
	}
	return (ft_substr (s1, y, len - y));
}
