/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:29 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/27 20:22:15 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", len);
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
			ft_putnbr(n / 10, len);
			ft_putchar(n % 10 + '0', len);
		}
		else
			ft_putchar(n + '0', len);
	}
}
