/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:02:38 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/24 22:50:33 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *len)
{
	int	i;

	i = 0;
	if (!s)
		ft_putstr_fd("(null)", fd, len);
	else
	{
		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd, len);
			i++;
		}
	}
}
