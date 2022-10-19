SRC =	ft_printf.c print_char.c \
      	print_string.c print_number.c helper.c

CC = gcc -Wall -Werror -Wextra


OBJ = ${SRC:%.c=%.o}

%.o : %.c
	${CC} -c $< -o $@ -I.


NAME = libftprintf.a

${NAME}: ${OBJ}
	ar -crs $@ $^

all: ${NAME}

clean: 
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: clean all