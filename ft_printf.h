/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:29:22 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/27 20:20:54 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>

size_t	ft_putchar(char c, int *len);
size_t	ft_putstr(char *s, int *len);
size_t	ft_putnbr(int n, int *len);
size_t	ft_putnbr_unsigned(unsigned int n, int *len);
size_t	ft_printf(char const *str, ...);

#endif
