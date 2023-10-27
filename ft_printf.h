/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:29:22 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/28 01:13:45 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>

int		ft_putchar(char c, int *len);
int		ft_putstr(char *s, int *len);
int		ft_putnbr(int n, int *len);
int		ft_putptr(unsigned long long int ptr, int *len);
int		ft_putunsigned(unsigned int n, int *len);
int		ft_printf(char const *str, ...);
int		ft_puthexa(unsigned long long int n, int *len, int ascii);

#endif
