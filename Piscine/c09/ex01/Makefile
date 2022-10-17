CC = cc
FLAGS = -Wall -Wextra -Werror
SOUCRS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
NAME = libft.a
INCLUDES = includes
REM = rm -f
LIBC = ar rc
LIBR = ranlib
OBJECTS = ${SOUCRS:.c=.o}

.c.o: #%.o : %.c
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

all: ${NAME}
${NAME}: ${OBJECTS}
	${LIBC} ${NAME} ${OBJECTS}
	${LIBR} ${NAME}
clean:
	${REM} ${OBJECTS}
fclean: clean
	${REM} ${NAME}
re: fclean all
