/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:04:40 by aradice           #+#    #+#             */
/*   Updated: 2022/05/24 19:29:12 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_decimal(long n)
{
	ft_putnbr(n);
	return (ft_nblen(n));
}

size_t	ft_udecimal(unsigned int n)
{
	ft_uputnbr(n);
	return (ft_nblen(n));
}

void	ft_putnbr(int nbr)
{
	char	c;
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb > 0)
	{
		c = '0' + nb % 10;
		nb = nb - nb % 10;
		nb = nb / 10;
		if (nb != 0)
			ft_putnbr (nb);
		write (1, &c, 1);
	}
	else if (nb == 0)
		write (1, "0", 1);
}

void	ft_uputnbr(unsigned int n)
{
	if (n > 9)
	{
		ft_uputnbr(n / 10);
		ft_uputnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

long	ft_nblen(long nb)
{
	long	size;

	size = 0;
	if (nb == 0)
		size++;
	if (nb < 0)
	{
		nb = nb * -1;
		size++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}
