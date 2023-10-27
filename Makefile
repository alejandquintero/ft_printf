# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 23:20:34 by aquinter          #+#    #+#              #
#    Updated: 2023/10/27 20:15:10 by aquinter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

RM = rm -rf

CC = gcc

AR = ar -cr

CFLAGS = -Wextra -Werror -Wall

SRC = ft_printf.c ft_printf_utils/ft_putchar.c \
	ft_printf_utils/ft_putnbr.c ft_printf_utils/ft_putstr.c \
	ft_printf_utils/ft_putnbr_unsigned.c

OBJ = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJ}
		${AR} ${NAME} ${OBJ}

clean: 
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all

