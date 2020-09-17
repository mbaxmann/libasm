# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/14 09:36:11 by mbaxmann          #+#    #+#              #
#    Updated: 2020/09/17 17:13:59 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS    =       ${SRCS:.s=.o}

OBJS_TEST =	${SRCS_TEST:.c=.o}

SRCS	=	ft_read.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_strlen.s ft_write.s

SRCS_TEST =	main.c test/ft_strcpy_test.c test/ft_strcmp_test.c test/ft_strdup_test.c test/ft_read_test.c

NASM    =	nasm

NASM_FLAGS   =       -felf64

NAME    =       libasm.a

RM      =       rm -rf

FLAGS	=	-Wall -Werror -Wextra

all:    ${NAME}

.s.o:
	${NASM} ${NASM_FLAGS} -s $< -o ${<:.s=.o}

.c.o:
	clang ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:        ${OBJS}
		ar rcs ${NAME} ${OBJS}

test:		${OBJS_TEST} ${NAME}
		clang ${OBJS_TEST} ${NAME}

clean:
	${RM} ${OBJS} ${OBJS_TEST}

fclean:         clean
	${RM} ${NAME} a.out

re:	fclean all

.PHONY: all clean fclean re

