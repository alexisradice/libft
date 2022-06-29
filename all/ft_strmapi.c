/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:28:35 by aradice           #+#    #+#             */
/*   Updated: 2022/05/14 19:27:38 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*test;
	size_t			size;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen (s);
	test = malloc (sizeof(char) * (size + 1));
	if (!test)
		return (NULL);
	while (s[i])
	{
		test[i] = f(i, s[i]);
		i++;
	}
	test[i] = '\0';
	return (test);
}
