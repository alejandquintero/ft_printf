/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:01:48 by aquinter          #+#    #+#             */
/*   Updated: 2023/10/20 00:57:34 by aquinter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i = ft_printf("hello world %% %c %s hahahah\n", 'a', "this is a test");
	ft_printf("num: %d", i);
	return (0);
}
