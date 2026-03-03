# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlabbaou <rlabbaou@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/16 19:07:23 by rlabbaou          #+#    #+#              #
#    Updated: 2026/02/16 19:15:05 by rlabbaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c helper.c

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
