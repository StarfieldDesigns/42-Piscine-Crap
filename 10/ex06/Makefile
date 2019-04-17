# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 21:53:33 by aholtzma          #+#    #+#              #
#    Updated: 2019/04/08 21:54:11 by aholtzma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SOURCES = main.c operators.c utils.c
CC = gcc
FLAGS = -Wall -Werror -Wextra -o

all:
	$(CC) $(SOURCES) $(FLAGS) $(NAME)

clean:
	rm -f $(NAME)