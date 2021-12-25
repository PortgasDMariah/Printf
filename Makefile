# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdouiri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 18:21:22 by mdouiri           #+#    #+#              #
#    Updated: 2021/12/25 11:45:21 by mdouiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c \
    ft_putnbr.c \
    ft_printf.c 

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM)   $(OBJS)

fclean :   clean
	$(RM) $(NAME)

re : fclean all

.PHONY = re all clean fclean
