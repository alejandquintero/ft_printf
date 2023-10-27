/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 23:51:34 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/28 01:13:51 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthexa_putchar(unsigned long long int n, int *len, int ascii)
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

int	ft_puthexa(unsigned long long int n, int *len, int ascii)
{
	if (n > 15)
	{
		ft_puthexa(n / 16, len, ascii);
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
		if (ft_puthexa_putchar(n, len, ascii) == -1)
			return (-1);
	}
	return (0);
}
