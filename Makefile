# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:47:32 by jsilva-m          #+#    #+#              #
#    Updated: 2023/11/17 20:09:13 by jsilva-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_print_hex.c ft_print_unsig_nbr.c \
	   ft_printstr.c ft_printnbr.c ft_printchar.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
