/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:29:05 by aradice           #+#    #+#             */
/*   Updated: 2022/05/17 16:41:53 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_process(int *tab, int i, int sign)
{
	char	*res;
	int		y;

	y = 0;
	res = malloc(sizeof(char) * ((9 - i + sign) + 1));
	if (!res)
		return (NULL);
	if (sign > 0)
	{
		res[y] = '-';
		y++;
	}
	while (i < 9)
	{
		res[y] = tab[i + 1];
		i++;
		y++;
	}
	res[y] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	int		tab[10];
	int		i;
	int		sign;

	i = 9;
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	if (n == 0)
		return (ft_strdup("0"));
	while (n != 0)
	{
		tab[i] = n % 10 + '0';
		i--;
		n = n / 10;
	}
	return (ft_process(tab, i, sign));
}
