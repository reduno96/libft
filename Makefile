# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 19:59:44 by rel-mora          #+#    #+#              #
#    Updated: 2024/01/01 20:00:36 by rel-mora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_MANDATORY = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_toupper.c ft_tolower.c ft_isascii.c ft_isprint.c \
	   	ft_memcpy.c ft_memmove.c ft_memset.c ft_strdup.c\
		ft_memchr.c ft_memcmp.c ft_bzero.c ft_calloc.c\
	   	ft_strchr.c  ft_strrchr.c ft_strlen.c ft_strncmp.c \
		ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_itoa.c\
		ft_substr.c ft_strjoin.c ft_split.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c \

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJS = ${SRCS_MANDATORY:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME = libft.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o:%.c libft.h
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

bonus: ${NAME} ${OBJS_BONUS}
	${LIBC} ${NAME} ${OBJS_BONUS}
clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME} ${bonus}

re: fclean all

.PHONY : all bonus clean fclean re