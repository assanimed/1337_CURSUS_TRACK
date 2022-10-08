SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
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
	  ft_putnbr_fd.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_itoa.c	\
	  ft_split.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \

BNS = ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstadd_back.c \
	  ft_lstdelone.c \
	  ft_lstclear.c \

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

CC = gcc ${FLAGS} -c

OBJ = ${SRC:%.c=%.o}
BOBJ = ${BNS:%.c=%.o}

RMV = rm -rf

${NAME}: ${OBJ}
		${CC} ${SRC} -I./
		ar -crs ${NAME} ${OBJ}

all: ${NAME}

bonus: ${NAME} ${BOBJ}
	ar -crs ${NAME} ${BOBJ}

clean:
	${RMV} ${OBJ}

fclean: clean
		${RMV} ${NAME}


re: fclean all
