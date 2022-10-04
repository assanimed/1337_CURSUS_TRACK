SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_memcpy.c \
	  ft_bzero.c \
	  ft_strlcpy.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_calloc.c \
	  ft_strrchr.c \
	  ft_strlen.c \
	  ft_atoi.c \
	  ft_strtrim.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_strncmp.c \
	  ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstsize.c 

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

CC = gcc ${FLAGS} -c

OBJ = ${SRC:%.c=%.o}

RMV = rm -rf

${NAME}: ${OBJ}
		${CC} ${SRC} -I./
		ar -crs ${NAME} ${OBJ}

all: ${NAME}

clean:
	${RMV} ${OBJ}

fclean: clean
		${RMV} ${NAME}


re: fclean all
