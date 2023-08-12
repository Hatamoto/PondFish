# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 17:36:21 by mburakow          #+#    #+#              #
#    Updated: 2023/07/20 18:55:46 by mburakow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES_DIR = ./srcs/

SOURCES = $(addprefix $(SOURCES_DIR), ft_swap.c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c)

OBJECTS = $(SOURCES:.c=.o)

INCLUDES_DIR = ./includes/

INCLUDES = $(addprefix $(INCLUDES_DIR), ft.h)

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc $(CFLAGS) -c $< -o $@ -I$(INCLUDES)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -crs $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES) $(INCLUDES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all
