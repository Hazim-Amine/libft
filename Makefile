# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 20:37:13 by ahazim            #+#    #+#              #
#    Updated: 2021/11/29 22:41:25 by ahazim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_memset.c     \
		ft_bzero.c      \
		ft_memcpy.c    	\
		ft_memmove.c    \
		ft_memchr.c     \
		ft_memcmp.c     \
		ft_strlen.c     \
		ft_isalpha.c    \
		ft_isdigit.c    \
		ft_isalnum.c    \
		ft_isascii.c    \
		ft_isprint.c    \
		ft_toupper.c    \
		ft_tolower.c    \
		ft_strrchr.c    \
		ft_strncmp.c    \
		ft_strlcpy.c    \
		ft_strlcat.c    \
		ft_strnstr.c    \
		ft_atoi.c       \
		ft_strchr.c		\
		ft_strdup.c		\
		ft_calloc.c 	\
		ft_strjoin.c 	\
		ft_substr.c		\
		ft_strtrim.c 	\
		ft_putchar_fd.c \
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_itoa.c		\
		ft_split.c		\

OBJECTS = $(SRC:.c=.o)

INCLUDES = libft.h \

all: $(NAME)

$(NAME):$(OBJECTS) $(INCLUDES)
	 ar rc $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
