/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:11:09 by aquinter          #+#    #+#             */
/*   Updated: 2023/11/02 18:31:46 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunsigned(unsigned int n, int *len)
{
	if (n > 9)
	{
		if (ft_putunsigned(n / 10, len))
			return (-1);
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
