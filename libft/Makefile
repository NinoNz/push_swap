# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alnzohab <alnzohab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 17:41:58 by alnzohab          #+#    #+#              #
#    Updated: 2023/03/13 19:45:30 by alnzohab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC      =	gcc
FLAGS   =	-Wall -Werror -Wextra
RM      =	rm -rf
NAME    =   libft.a
OBJ     =   $(SRC:.c=.o)
SRC     =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
			ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c ft_calloc.c \
			ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memcmp.c ft_itoa.c

$(NAME): $(OBJ)
		ar -rcs $@ $^

%.o : %.c
	$(CC) $(FLAGS) -c $^ -o $@
	
all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re 