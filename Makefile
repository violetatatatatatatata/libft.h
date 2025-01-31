# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 13:25:46 by cbolanos          #+#    #+#              #
#    Updated: 2025/01/31 19:04:05 by avelandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiladador y sus flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Libreria
NAME = libft.a

# Lista de funciones a compilar
FUNCTIONS = ft_atoi.c \
           ft_bzero.c \
           ft_calloc.c \
           ft_isalnum.c \
           ft_isalpha.c \
           ft_isascii.c \
           ft_isdigit.c \
           ft_isprint.c \
           ft_itoa.c \
           ft_memchr.c \
           ft_memcmp.c \
           ft_memcpy.c \
           ft_memmove.c \
           ft_memset.c \
           ft_putchar_fd.c \
           ft_putendl_fd.c \
           ft_putnbr_fd.c \
           ft_putstr_fd.c \
           ft_split.c \
           ft_strchr.c \
           ft_strdup.c \
           ft_striteri.c \
           ft_strjoin.c \
           ft_strlcat.c \
           ft_strlcpy.c \
           ft_strlen.c \
           ft_strmapi.c \
           ft_strncmp.c \
           ft_strnstr.c \
           ft_strrchr.c \
           ft_strtrim.c \
           ft_substr.c \
           ft_tolower.c \
           ft_toupper.c

# Objectos
OBJS = $(FUNCTIONS:%.c=%.o)

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $^

# Rule to compile .c files into .o files
$(OBJS): %.o: %.c libft.h Makefile
	$(CC) -c $(CFLAGS) $< -o $@

$(BOBJS): %.o: %.c libft.h
	$(CC) -c $(CFLAGS) $< -o $@

# Rule to run Valgrind for memory leak checks
valgrind: $(NAME)
	valgrind --leak-check=full --track-fds=yes ./$(NAME)

# Clean up the object files
clean:
	rm -f $(OBJS)
	rm -f $(BOBJS)

# Clean up the object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild the library from scratch
re: fclean all

# Print the list of functions (for debugging purposes)
info:
	$(info $(FUNCTIONS))

# Declare these rules as phony (they are not actual files)
.PHONY: all clean fclean re info valgrind
