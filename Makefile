#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 11:13:30 by rel-mora          #+#    #+#              #
#    Updated: 2023/12/24 00:06:09 by Red-Mor          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_toupper.c ft_tolower.c ft_isascii.c ft_isprint.c \
       	ft_memcpy.c ft_memmove.c ft_memset.c ft_strdup.c\
		ft_memchr.c ft_memcmp.c ft_bzero.c ft_calloc.c\
       	ft_strchr.c  ft_strrchr.c ft_strlen.c ft_strncmp.c \
		ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_itoa.c\
		ft_substr.c ft_strjoin.c ft_split.c ft_strtrim.c ft_strmapi.c ft_striteri.c \

OBJS = ${SRCS:.c=.o}

NAME = libft.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all
