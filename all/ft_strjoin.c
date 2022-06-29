/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:24:28 by aradice           #+#    #+#             */
/*   Updated: 2022/05/14 21:17:20 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*test;
	int		s1size;
	int		s2size;

	s1size = 0;
	s2size = 0;
	if (!s1 || !s2)
		return (NULL);
	test = malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!test)
		return (NULL);
	while (s1[s1size])
	{
		test[s1size] = s1[s1size];
		s1size++;
	}
	while (s2[s2size])
	{
		test[s1size] = s2[s2size];
		s1size++;
		s2size++;
	}
	test[s1size] = '\0';
	return (test);
}
