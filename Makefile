# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 17:00:19 by plashkar          #+#    #+#              #
#    Updated: 2023/04/18 19:11:19 by plashkar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
#LIBRARY = libft.a
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all re
