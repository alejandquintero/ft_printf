/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:18 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/27 20:19:54 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_putchar(char c, int *len)
{
	size_t bytes_writed;

	bytes_writed = 0;
	(*len)++;
	bytes_writed = write(1, &c, 1);
	return (bytes_writed);
}
