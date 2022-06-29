/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:24:34 by aradice           #+#    #+#             */
/*   Updated: 2022/05/14 17:30:08 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	val;

	val = n;
	if (val < 0)
	{
		val = val * -1;
		ft_putchar_fd ('-', fd);
	}
	if (val < 10)
	{
		ft_putchar_fd (val + '0', fd);
	}
	else
	{
		ft_putnbr_fd (val / 10, fd);
		ft_putnbr_fd (val % 10, fd);
	}
}
