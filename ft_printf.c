/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:55:00 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/27 20:21:17 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_factory(char const *str, va_list ptr, int *len)
{
	if (*str == 'd' || *str == 'i')
		return (ft_putnbr(va_arg(ptr, int), len));
	else if (*str == 'u')
		ft_putnbr_unsigned(va_arg(ptr, unsigned int), len);
	else if (*str == 'c')
		ft_putchar(va_arg(ptr, int), len);
	else if (*str == 's')
		ft_putstr(va_arg(ptr, char *), len);
	else if (*str == '%')
		ft_putchar('%', len);
}

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			ft_print_factory(str, ptr, &len);
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	va_end(ptr);
	return (len);
}
