##
## EPITECH PROJECT, 2021
## B-AIA-200-PAR-2-1-bsn4s-thomas.willson
## File description:
## Makefile
##

SRC	=	./src/main.c			\
		./src/move_car.c		\
		./src/get_line.c 		\
		./src/my_str_to_word_array.c	\
		./src/car_forward.c				\

OBJ	=	${SRC:.c=.o}

NAME	=	ai

CC	=	gcc

RM	=	rm -f

CFLAGS	+=	-I./include

SRCDEL	=	./src/*.c~

DEL	=	*~

all:	${NAME}

${NAME}:	${OBJ}
	${CC} -o ${NAME} ${OBJ} ${CFLAGS}

clean:
	${RM} ${OBJ}
	${RM} ${SRCDEL}
	${RM} ${DEL}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
