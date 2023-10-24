# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 23:20:34 by aquinter          #+#    #+#              #
#    Updated: 2023/10/24 21:12:57 by aquinter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

RM = rm -rf

CC = gcc

AR = ar -cr

CFLAGS = -Wextra -Werror -Wall

SRC = ft_printf.c ft_printf_utils/ft_putchar_fd.c \
	ft_printf_utils/ft_putnbr_fd.c \
	ft_printf_utils/ft_putstr_fd.c \

OBJ = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJ}
		${AR} ${NAME} ${OBJ}

clean: 
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all

