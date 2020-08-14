# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 12:29:56 by nalysann          #+#    #+#              #
#    Updated: 2020/08/14 12:29:57 by nalysann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
      srcs/ft_putstr.c \
      srcs/ft_strcmp.c \
      srcs/ft_strlen.c \
      srcs/ft_swap.c

INC_DIR = includes

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = $(addprefix -I, $(INC_DIR)) -c -Wall -Wextra -Werror

.PHONY: all compile clean fclean re

all: $(NAME)

$(NAME): compile
	@ar rc $(NAME) $(OBJ)

compile:
	@$(CC) $(CFLAGS) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
