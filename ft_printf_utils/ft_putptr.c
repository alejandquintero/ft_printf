/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 00:50:30 by aquinter          #+#    #+#             */
/*   Updated: 2023/11/02 18:12:15 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putptr(unsigned long long int ptr, int *len)
{
	if (!len)
		return (0);
	if (ft_putstr("0x", len) == -1)
		return (-1);
	return (ft_put_transform_hexa(ptr, len, 87));
}
