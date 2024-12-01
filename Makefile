# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboutahi <mboutahi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 14:45:10 by mboutahi          #+#    #+#              #
#    Updated: 2024/12/01 11:59:59 by mboutahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_print.c print_char.c print_digit.c print_str.c print_pointer.c \
print_unsigned.c

OBJ = $(SRC:.c=.o)

CC = cc

AR = ar

ARFLAG = -rcs

CFLAGS = -Wall -Werror -Wextra


all: $(NAME)
 
$(NAME) : $(OBJ)
	$(AR) $(ARFLAG) $(NAME) $?

%.o: %.c ft_print.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re