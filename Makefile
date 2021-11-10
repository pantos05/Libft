NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra
OPFLAGS = -O2

SRC	=   ft_atoi.c\
		ft_itoa.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_stritery.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strtrim.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c
D_FILE = $(patsubst %.c,%.d,$(SRC))

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $?
	ranlib $(NAME)

%.o : %.c
	gcc $(CFLAGS) $(OPFLAGS) -c $< -o $@ -MD

clean:
	rm -f $(OBJ) $(D_FILE)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(wildcard $(D_FILE))
.PHONY: all clean fclean re