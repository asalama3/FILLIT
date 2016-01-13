# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalama <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 16:46:12 by asalama           #+#    #+#              #
#    Updated: 2016/01/13 13:57:42 by fhuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC		= ft_strlen.c		\
		  ft_isdigit.c		\
		  ft_isupper.c		\
		  ft_strcmp.c		\
		  ft_memmove.c		\
		  ft_memset.c		\
		  ft_strlcat.c		\
		  ft_strcat.c		\
		  ft_strncat.c		\
		  ft_bzero.c		\
		  ft_memcpy.c		\
		  ft_strdup.c		\
		  ft_strcpy.c		\
		  ft_strncpy.c		\
		  ft_strchr.c		\
		  ft_strrchr.c		\
		  ft_strncmp.c		\
		  ft_atoi.c			\
		  ft_isalpha.c		\
		  ft_isdigit.c		\
		  ft_isascii.c		\
		  ft_isprint.c		\
		  ft_toupper.c		\
		  ft_tolower.c		\
		  ft_memccpy.c		\
		  ft_isalnum.c		\
		  ft_memcmp.c		\
		  ft_memchr.c		\
		  ft_strstr.c		\
		  ft_strnstr.c		\
		  ft_putchar.c		\
		  ft_putstr.c		\
		  ft_itoa.c			\
		  ft_putnbr.c		\
		  ft_putnbr_fd.c	\
		  ft_putchar_fd.c	\
		  ft_putstr_fd.c	\
		  ft_putendl.c		\
		  ft_putendl_fd.c	\
		  ft_memalloc.c		\
		  ft_strnew.c		\
		  ft_strclr.c		\
		  ft_striter.c		\
		  ft_striteri.c		\
		  ft_strmap.c		\
		  ft_strmapi.c		\
		  ft_strequ.c		\
		  ft_strnequ.c		\
		  ft_memdel.c		\
		  ft_strdel.c		\
		  ft_strjoin.c		\
		  ft_strsub.c		\
		  ft_strtrim.c		\
		  ft_strsplit.c		\
		  ft_lstnew.c		\
		  ft_lstdelone.c	\
		  ft_lstdel.c		\
		  ft_lstadd.c		\
		  ft_lstiter.c		\
		  ft_lstaddend.c	\
		  get_next_line.c

OBJ= $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

