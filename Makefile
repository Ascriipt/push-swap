# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 14:57:20 by maparigi          #+#    #+#              #
#    Updated: 2022/04/24 17:26:06 by maparigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = clang

SRCS = ft_split.c utilities.c main.c push.c \
		swap.c rotate.c reverse_rotate.c lis.c \
		checks.c move_utils.c sorting.c utilities2.c \
		setup.c sst.c \

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -g3

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

aclean: all clean

.PHONY: all clean fclean re bonus aclean