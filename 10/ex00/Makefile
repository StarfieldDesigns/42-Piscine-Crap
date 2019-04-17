# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 14:17:18 by aholtzma          #+#    #+#              #
#    Updated: 2019/04/08 15:44:45 by aholtzma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ./srcs/*.c
INCLUDES = includes/
CC = gcc
FLAGS = -c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -I$(INCLUDES) $(SOURCES)
	ar src $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
