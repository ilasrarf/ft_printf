# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 23:57:50 by ilasrarf          #+#    #+#              #
#    Updated: 2022/11/10 22:26:21 by ilasrarf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_puthex.c ft_unsg.c ft_mem.c

O_SRC = ft_printf.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_puthex.o ft_unsg.o ft_mem.o

AR = ar -rc
NAME = libftprintf.a
RM = rm -f
CC = cc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(O_SRC) ft_printf.h
	$(AR) $(NAME) $(O_SRC)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $<

clean:
	$(RM) $(O_SRC)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re clean $(NAME)
