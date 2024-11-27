NAME = libftprintf.a

SRC = ft_print.c print_char.c print_digit.c print_str.c print_pointer.c print_unsigned.c print_p.c


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