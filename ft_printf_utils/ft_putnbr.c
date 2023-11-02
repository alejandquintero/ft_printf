/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:29 by aquinter          #+#    #+#             */
/*   Updated: 2023/11/02 18:31:04 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648", len));
	else
	{
		if (n < 0)
		{
			n *= -1;
			if (ft_putchar('-', len) == -1)
				return (-1);
		}
		if (n > 9)
		{
			if (ft_putnbr(n / 10, len) == -1)
				return (-1);
			if (ft_putchar(n % 10 + '0', len) == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar(n + '0', len) == -1)
				return (-1);
		}
	}
	return (0);
}
