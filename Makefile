SRCS	+= 	$(addprefix all/, \
						ft_atoi.c \
						ft_bzero.c \
						ft_calloc.c \
						ft_isalnum.c \
						ft_isalpha.c \
						ft_isascii.c \
						ft_isdigit.c \
						ft_isprint.c \
						ft_memchr.c \
						ft_memcmp.c \
						ft_memcpy.c \
						ft_memmove.c \
						ft_memset.c \
						ft_strchr.c \
						ft_strdup.c \
						ft_strlcat.c \
						ft_strlcpy.c \
						ft_strlen.c \
						ft_strncmp.c \
						ft_strnstr.c \
						ft_strrchr.c \
						ft_tolower.c \
						ft_toupper.c \
						ft_strjoin.c \
						ft_substr.c \
						ft_strtrim.c \
						ft_split.c \
						ft_itoa.c \
						ft_strmapi.c \
						ft_striteri.c \
						ft_putchar_fd.c \
						ft_putstr_fd.c \
						ft_putendl_fd.c \
						ft_putnbr_fd.c \
						ft_lstnew.c \
						ft_lstadd_front.c \
						ft_lstsize.c \
						ft_lstlast.c \
						ft_lstadd_back.c \
						ft_lstdelone.c \
						ft_lstclear.c \
						ft_lstiter.c \
						ft_lstmap.c)

SRCS	+= 	$(addprefix gnl/, \
						get_next_line.c \
						get_next_line_utils.c)

SRCS	+= 	$(addprefix ft_printf/, \
						ft_decimal.c \
						ft_hexa.c \
						ft_printf.c)

OBJS = $(SRCS:.c=.o)

INCL	=	-I./includes

NAME = libft.a

CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) $(INCL) -o $@ -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

# OBJS	=	${SRCS:.c=.o}

# NAME	= libft.a

# CC		= gcc
# CFLAGS	= -Wall -Wextra -Werror

# .c.o:
# 				${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

# all:		${NAME}

# $(NAME):	${OBJS}
# 				ar rc ${NAME} ${OBJS}
# 				ranlib ${NAME}

# clean:
# 				rm -f ${OBJS}

# fclean:		clean
# 				rm -f ${NAME}

# re:				fclean all

# .PHONY:			all clean fclean re 