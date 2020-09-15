# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/14 09:36:11 by mbaxmann          #+#    #+#              #
#    Updated: 2020/09/15 11:42:25 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS    =       ${SRCS:.s=.o}

SRCS	=	ft_read.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_strlen.s ft_write.s

NASM    =	nasm

FLAGS   =       -felf64

NAME    =       libasm.a

RM      =       rm -rf

all:    ${NAME}

.s.o:
	${NASM} ${FLAGS} -s $< -o ${<:.s=.o}

${NAME}:        ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:         clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re

