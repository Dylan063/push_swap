# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 16:47:42 by dravaono          #+#    #+#              #
#    Updated: 2024/02/22 16:11:00 by dravaono         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c pars.c PS_utils.c Stack.c mouv_stack.c mouv_stack2.c\

OBJS = ${SRCS:.c=.o}
NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror -Wno-error
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