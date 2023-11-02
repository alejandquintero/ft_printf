/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:37:28 by aquinter          #+#    #+#             */
/*   Updated: 2023/11/02 18:48:00 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    char c = 'A';
    char *s = "Hello, World!";
    int n = 1234525;
    unsigned int u = 54321;
    void *ptr = &n;

    int int_min = INT_MIN;
    int int_max = INT_MAX;
    unsigned int uint_max = UINT_MAX;

    printf("Original printf:\n");
    printf("%%c: %c\n", c);
    printf("%%s: %s\n", s);
    printf("%%p: %p\n", ptr);
    printf("%%d (min): %d\n", int_min);
    printf("%%d (max): %d\n", int_max);
    printf("%%i (min): %i\n", int_min);
    printf("%%i (max): %i\n", int_max);
    printf("%%u: %u\n", u);
    printf("%%u: (max): %u\n", uint_max);
    printf("%%x: %x\n", n);
    printf("%%X: %X\n", n);
    printf("%%%%: %%\n");
    printf("%%%%: %%%%%%\n");

    printf("\nMy ft_printf:\n");
    ft_printf("%%c: %c\n", c);
    ft_printf("%%s: %s\n", s);
    ft_printf("%%p: %p\n", ptr);
    ft_printf("%%d (min): %d\n", int_min);
    ft_printf("%%d (max): %d\n", int_max);
    ft_printf("%%i (min): %i\n", int_min);
    ft_printf("%%i (max): %i\n", int_max);
    ft_printf("%%u: %u\n", u);
    ft_printf("%%u: (max): %u\n", uint_max);
    ft_printf("%%x: %x\n", n);
    ft_printf("%%X: %X\n", n);
    ft_printf("%%%%: %%\n");
    ft_printf("%%%%: %%%%%%\n");

    return (0);
}