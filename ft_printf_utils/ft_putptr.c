/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 00:50:30 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/28 01:14:14 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthexa_putchar_ptr(unsigned long long int n, int *len, int ascii)
{
	if (n > 9)
	{
		if (ft_putchar(n + ascii, len) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar(n + '0', len) == -1)
			return (-1);
	}
	return (0);
}

int	ft_puthexa_ptr(unsigned long long int n, int *len, int ascii)
{
	if (n > 15)
	{
		ft_puthexa_ptr(n / 16, len, ascii);
		if (n % 16 > 9)
		{
			if (ft_putchar(n % 16 + ascii, len) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar(n % 16 + '0', len) == -1)
				return (-1);
		}
	}
	else
	{
		if (ft_puthexa_putchar_ptr(n, len, ascii) == -1)
			return (-1);
	}
	return (0);
}

int	ft_putptr(unsigned long long int ptr, int *len)
{
	if (!len)
		return (0);
	if (ft_putstr("0x", len) == -1)
		return (-1);
	return (ft_puthexa(ptr, len, 87));
}
