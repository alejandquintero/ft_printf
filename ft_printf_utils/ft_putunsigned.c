/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:11:09 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/28 00:46:46 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunsigned(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_putunsigned(n / 10, len);
		if (ft_putchar(n % 10 + '0', len) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar(n + '0', len) == -1)
			return (-1);
	}
	return (0);
}
