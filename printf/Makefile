# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 17:01:31 by jsilva-m          #+#    #+#              #
#    Updated: 2023/11/11 17:09:01 by jsilva-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 


OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(SRCS)
		@gcc -c $(FLAGS) $(SRCS)
		@ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean: 
		@rm -f $(OBJ)

fclean: @rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
