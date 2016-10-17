# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/17 13:21:56 by vrybalko          #+#    #+#              #
#    Updated: 2016/10/17 20:11:42 by vrybalko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FLAGS = -Wall -Wextra -Werror

SRCS = read_file.c bsq_solve.c main.c ft_puterror.c mallocat.c ft_strlen.c\
	   ft_atoi.c ft_strlen_slesh.c ft_split_nl.c x.c valid_char.c\
	   ft_find_square.c ft_square_oper.c

BINS = read_file.o bsq_solve.o main.o ft_puterror.o mallocat.o ft_strlen.o\
	   ft_atoi.o ft_strlen_slesh.o ft_split_nl.o x.o valid_char.o\
	   ft_find_square.o ft_square_oper.o

all: $(NAME)

$(NAME):
	gcc -c $(SRCS)
	gcc -o $(NAME) $(FLAGS) $(BINS)

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
