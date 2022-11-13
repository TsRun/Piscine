# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maserrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 00:28:41 by maserrie          #+#    #+#              #
#    Updated: 2022/11/13 00:45:03 by maserrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += srcs/main.c
SRCS += srcs/ft_str.c
SRCS += srcs/ft_split.c
SRCS += srcs/ft_print_solution.c
SRCS += srcs/ft_parse.c
SRCS += srcs/ft_get_input.c
SRCS += srcs/ft_free_mats.c
SRCS += srcs/ft_file.c
SRCS += srcs/ft_create_int_matrix.c
SRCS += srcs/ft_create_char_matrix.c
SRCS += srcs/ft_check_input.c
SRCS += srcs/ft_bsq.c

INCLUDES = includes

OBJS = ${SRCS:.c=.o}

NAME = bsq

CC = gcc

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

DFLAGS += -fsanitize=address,undefined
DFLAGS += -g3

RM = rm -f

all: ${NAME}

%.o : %.c
    ${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o $@

${NAME}: ${OBJS}
    ${CC} -o ${NAME} ${OBJS}

debug: ${OBJS}
    ${CC} ${DFLAGS} -o ${NAME} ${OBJS}

clean:
    ${RM} ${OBJS}

fclean: clean
    ${RM} ${NAME}

re: fclean all

.PHONY: re fclean clean debug all
