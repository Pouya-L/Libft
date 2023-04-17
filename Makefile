# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 17:00:19 by plashkar          #+#    #+#              #
#    Updated: 2023/04/17 14:19:11 by plashkar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBRARY = libft.a
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)

all: $(LIBRARY)

$(LIBRARY): $(OBJ)
	ar -crs $(LIBRARY) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all

.PHONY: fclean clean all re

#NAME	= libft.a
#
#DIR_SRCS	= srcs
#DIR_OBJS	= objs
#SUBDIRS		= is to mem str put lst math gnl printf
#
#SRCS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRCS)/, $(dir)))
#OBJS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJS)/, $(dir)))
#SRCS		= $(foreach dir, $(SRCS_DIRS), $(wildcard $(dir)/*.c))
#OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))
#
#INCLUDES	= -I includes
#
#CC		= clang
#CFLAGS	= -Wall -Wextra -Werror
#RM		= /bin/rm -f
#
#$(DIR_OBJS)/%.o :	$(DIR_SRCS)/%.c
#			@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
#			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
#
#all:		$(NAME)
#
#$(NAME):	$(OBJS)
#			@ar -rcs $(NAME) $(OBJS)
#			@ranlib $(NAME)
#
#clean:
#			@$(RM) $(OBJS)
#			@$(RM) -r $(DIR_OBJS)
#
#fclean:		clean
#			@$(RM) $(NAME)
#
#re:			fclean all
