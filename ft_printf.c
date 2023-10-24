/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:55:00 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/24 22:30:56 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_factory(char const *str, va_list ptr, int *len)
{
	if (*str == 'd')
		ft_putnbr_fd(va_arg(ptr, int), 1, len);
	else if (*str == 'c')
		ft_putchar_fd(va_arg(ptr, int), 1, len);
	else if (*str == 's')
		ft_putstr_fd(va_arg(ptr, char *), 1, len);
	else if (*str == '%')
		ft_putchar_fd('%', 1, len);
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
			ft_putchar_fd(*str, 1, &len);
		str++;
	}
	va_end(ptr);
	return (len);
}
