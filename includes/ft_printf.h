/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradice <aradice@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:15:56 by aradice           #+#    #+#             */
/*   Updated: 2022/05/24 19:20:10 by aradice          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

long	ft_nblen(long nb);
size_t	ft_hexlen(unsigned long n);

int		ft_putchar(char c);
size_t	ft_putstr(const char *str);
void	ft_putnbr(int nbr);
void	ft_uputnbr(unsigned int n);
void	ft_puthexlow(unsigned long n);
void	ft_puthexup(unsigned long n);

size_t	ft_decimal(long n);
size_t	ft_udecimal(unsigned int n);
size_t	ft_hex(unsigned long n, char c);
size_t	ft_pointer(unsigned long n);

int		ft_findconvert(va_list arg, char c);
int		ft_printf(const char *test, ...);

#endif