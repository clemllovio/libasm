NAME		=	libasm.a

ASM			=	nasm
ASM_FLAGS	=	-felf64
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	includes/
DIR_SRCS	=	srcs/
DIR_TEST	=	test/
DIR_OBJS	=	.objs/

SRCS		=	ft_strlen.s\
				ft_strcpy.s\
				ft_strcmp.s\
				ft_write.s\
				ft_read.s

TEST		=	main.c\
				ft_strlen_test.c\
				ft_strcpy_test.c\
				ft_strcmp_test.c\
				ft_write_test.c\
				ft_read_test.c

HEADERS		=	${INCLUDES}library.h
OBJS		=	${addprefix ${DIR_OBJS},${addprefix ${DIR_SRCS},${SRCS:.s=.o}}}
OBJS_TEST	=	${addprefix ${DIR_OBJS},${addprefix ${DIR_TEST},${TEST:.c=.o}}}
RMF			=	rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

${DIR_OBJS}${DIR_SRCS}%.o: ${DIR_SRCS}%.s ${HEADERS}
	mkdir -p ${dir $@}
	${ASM} ${ASM_FLAGS} $< -o $@

${DIR_OBJS}${DIR_TEST}%.o: ${DIR_TEST}%.c ${HEADERS}
	mkdir -p ${dir $@}
	${CC} ${CFLAGS} -I${INCLUDES} -c $< -o $@

test:	${NAME} ${OBJS_TEST}
	${CC} ${CFLAGS} -I${INCLUDES} -o test.out ${OBJS_TEST} ${NAME}

clean:
	${RMF} ${DIR_OBJS}

fclean:	clean
	${RMF} ${NAME}

re:	fclean
	${MAKE} all

.PHONY:	all clean fclean re