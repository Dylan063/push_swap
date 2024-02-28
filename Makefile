# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 16:47:42 by dravaono          #+#    #+#              #
#    Updated: 2024/02/27 20:36:29 by dravaono         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c pars.c PS_utils.c Stack.c small_algo.c big_algo.c\
		mouv_stack.c mouv_stack2.c placement_algo.c\


OBJS = ${SRCS:.c=.o}
NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBFT = ./libft

all : ${NAME}

${NAME}: ${OBJS}
		 ${MAKE} -C ${LIBFT}/	
		 ${CC} ${FLAGS} ${OBJS} ${LIBFT}/libft.a -o $(NAME)

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean: 
		${MAKE} clean -C ${LIBFT}/
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME} ${LIBFT}/libft.a

re: fclean all

.PHONY: all clean flcean re