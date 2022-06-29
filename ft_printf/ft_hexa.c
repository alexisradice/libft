/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:04:46 by aradice           #+#    #+#             */
/*   Updated: 2022/05/23 20:35:06 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_hex(unsigned long n, char c)
{
	if (c == 'X')
		ft_puthexup(n);
	else if (c == 'x')
		ft_puthexlow(n);
	return (ft_hexlen(n));
}

void	ft_puthexup(unsigned long n)
{
	char	*hextest;

	hextest = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthexup(n / 16);
	ft_putchar(hextest[n % 16]);
}

void	ft_puthexlow(unsigned long n)
{
	char	*hextest;

	hextest = "0123456789abcdef";
	if (n >= 16)
		ft_puthexlow(n / 16);
	ft_putchar(hextest[n % 16]);
}

size_t	ft_hexlen(unsigned long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

size_t	ft_pointer(unsigned long n)
{
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	ft_puthexlow(n);
	return (ft_hexlen(n) + 2);
}
