/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:55:00 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/14 23:22:00 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar_fd('-', fd);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
}
int ft_printf(char const *str, ...)
{
	va_list	ptr;

	va_start(ptr, str);
	while (*str != '\0')
	{
		if(*str == '%')
		{
			str++;
			if (*str == 'd')
				ft_putnbr_fd(va_arg(ptr, int), 1);
			else if (*str == 'c')
				ft_putchar_fd(va_arg(ptr, int), 1);
			else if (*str == 's')
				ft_putstr_fd(va_arg(ptr, char *), 1);
			else if (*str == '%')
				ft_putchar_fd('%', 1);
		}
		else
		{
			ft_putchar_fd(*str, 1);
		}
		str++;
	}
	va_end(ptr);
	return (0);
}
	
int	main(void)
{
	int n;
	ft_printf("hello world %% %c %s hahahah", 'a', "this is a test");
	//n= printf("hello world %% %c %s hahahah", 'a', "this is a test");
	return(0);
}