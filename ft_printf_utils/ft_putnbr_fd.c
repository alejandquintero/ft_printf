/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:29 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/24 21:21:23 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *len)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd, len);
	else
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar_fd('-', fd, len);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd, len);
			ft_putchar_fd(n % 10 + '0', fd, len);
		}
		else
			ft_putchar_fd(n + '0', fd, len);
	}
}
