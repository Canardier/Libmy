NAME =	libmy.a

SRCS =		srcs/my_atoi.c\
		srcs/my_bzero.c\
		srcs/my_isalnum.c\
		srcs/my_isalpha.c\
		srcs/my_isascii.c\
		srcs/my_isdigit.c\
		srcs/my_isprint.c\
		srcs/my_itoa.c\
		srcs/my_memalloc.c\
		srcs/my_memccpy.c\
		srcs/my_memchr.c\
		srcs/my_memcmp.c\
		srcs/my_memcpy.c\
		srcs/my_memdel.c\
		srcs/my_memmove.c\
		srcs/my_memset.c\
		srcs/my_putchar.c\
		srcs/my_putchar_fd.c\
		srcs/my_putendl.c\
		srcs/my_putendl_fd.c\
		srcs/my_putnbr.c\
		srcs/my_putnbr_fd.c\
		srcs/my_putstr.c\
		srcs/my_putstr_fd.c\
		srcs/my_strcat.c\
		srcs/my_strchr.c\
		srcs/my_strclr.c\
		srcs/my_strcmp.c\
		srcs/my_strcpy.c\
		srcs/my_strdel.c\
		srcs/my_strdup.c\
		srcs/my_strequ.c\
		srcs/my_striter.c\
		srcs/my_striteri.c\
		srcs/my_strjoin.c\
		srcs/my_strlcat.c\
		srcs/my_strlen.c\
		srcs/my_strmap.c\
		srcs/my_strmapi.c\
		srcs/my_strncat.c\
		srcs/my_strncmp.c\
		srcs/my_strncpy.c\
		srcs/my_strnequ.c\
		srcs/my_strnew.c\
		srcs/my_strnstr.c\
		srcs/my_strrchr.c\
		srcs/my_strsplit.c\
		srcs/my_strstr.c\
		srcs/my_strsub.c\
		srcs/my_strtrim.c\
		srcs/my_tolower.c\
		srcs/my_toupper.c\

RM=	rm -rf

HDR=	includes/

OBJS= $(SRCS:.c=.o)

FLAG= -Wall -Werror -Wextra

all: $(NAME)

.c.o:
	gcc -I $(HDR) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all\
	clean\
	fclean\
	re
