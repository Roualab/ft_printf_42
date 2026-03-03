/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:05:03 by rlabbaou          #+#    #+#             */
/*   Updated: 2026/02/17 21:42:37 by rlabbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_hex(unsigned long long x, int isLow)
{
	unsigned long long	hex;
	unsigned long long	i;
	char				j;

	hex = 0;
	if (x >= 16)
		ft_hex(x / 16, isLow);
	hex = x % 16;
	if (hex >= 0 && hex <= 9)
		ft_putnbr_fd(hex, 1);
	i = 0;
	j = 'a';
	if (!isLow)
		j -= 32;
	if (hex >= 10 && hex <= 15)
	{
		i = hex - 10;
		j = j + i;
		write(1, &j, 1);
	}
	return (ft_lenhex(x));
}

int	ft_check(va_list x, char *str)
{
	void	*argu;

	if (*str == 'c')
		return (ft_putchar_fd(va_arg(x, int), 1));
	if (*str == 's')
		return (ft_putstr_fd(va_arg(x, char *), 1));
	if (*str == 'i' || *str == 'd')
		return (ft_putnbr_fd(va_arg(x, int), 1));
	if (*str == 'u')
		return (ft_putnbr_fd((unsigned int)(va_arg(x, unsigned int)), 1));
	if (*str == '%')
		return (write(1, &"%", 1));
	if (*str == 'x' || *str == 'X')
		return (ft_hex(va_arg(x, unsigned int), *str == 'x'));
	if (*str == 'p')
	{
		argu = (va_arg(x, void *));
		if (argu == NULL)
			return (write(1, "(nil)", 5));
		write(1, "0x", 2);
		return (ft_hex((unsigned long long)argu, 'x') + 2);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count = count + 1;
		}
		else if (*format == '%')
			count = count + ft_check(args, (char *)++format);
		format++;
	}
	va_end(args);
	return (count);
}
