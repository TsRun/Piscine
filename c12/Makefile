# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maserrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 17:56:37 by maserrie          #+#    #+#              #
#    Updated: 2022/11/18 17:27:04 by maserrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c
SRCS += ex00/ft_create_elem.c
SRCS += ex01/ft_list_push_front.c
SRCS += ex02/ft_list_size.c
SRCS += ex03/ft_list_last.c
SRCS += ex04/ft_list_push_back.c
SRCS += ex05/ft_list_push_strs.c
SRCS += ex06/ft_list_clear.c
SRCS += ex07/ft_list_at.c

CFLAGS = -Wall -Werror -Wextra -g

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

HEADER = ft.h

NAME = chained_list

${NAME}: ${OBJS}
	${CC} -o ${NAME} -I ${HEADER} ${CFLAGS} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
