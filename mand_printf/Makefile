SRC =	ft_printf.c \
      	./src/print_char.c ./src/print_string.c ./src/print_number.c ./src/includes.c

CC = gcc -Wall -Werror -Wextra -c

OBJ = ${SRC:%.c=%.o}

%.o : %.c
	${CC} $< -o $@ -I.


NAME = libftprintf.a

${NAME}: ${OBJ}
	ar -crs $@ $^

all: ${NAME}

clean: 
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean
