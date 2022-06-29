/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:04:28 by aradice           #+#    #+#             */
/*   Updated: 2022/05/23 17:04:28 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_findconvert(va_list arg, char c)
{
	size_t	size;

	size = 0;
	if (c == 'c')
		size += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		size += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		size += ft_decimal(va_arg(arg, int));
	else if (c == 'u')
		size += ft_udecimal(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		size += ft_hex(va_arg(arg, unsigned int), c);
	else if (c == 'p')
		size += ft_pointer(va_arg(arg, unsigned long));
	else if (c == '%')
		size += ft_putchar('%');
	return (size);
}

int	ft_printf(const char *test, ...)
{
	va_list	arg;
	int		i;
	size_t	strlen;

	i = 0;
	strlen = 0;
	va_start(arg, test);
	while (test[i])
	{
		if (test[i] == '%')
		{
			strlen += ft_findconvert (arg, test[i + 1]);
			i++;
		}
		else
		{
			write (1, &test[i], 1);
			strlen++;
		}
		i++;
	}
	va_end(arg);
	return (strlen);
}
