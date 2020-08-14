# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 12:30:31 by nalysann          #+#    #+#              #
#    Updated: 2020/08/14 12:30:33 by nalysann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = srcs/ft_display_file.c \
      srcs/ft_putchar_fd.c \
      srcs/ft_putstr_fd.c \
      srcs/main.c

INC_DIR = includes

OBJ = ft_display_file.o \
      ft_putchar_fd.o \
      ft_putstr_fd.o \
      main.o

CC = gcc

CFLAGS = -c $(addprefix -I, $(INC_DIR)) -Wall -Wextra -Werror

all: $(NAME)

$(NAME): compile
	@$(CC) $(OBJ) -o $(NAME)

compile:
	@$(CC) $(CFLAGS) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
