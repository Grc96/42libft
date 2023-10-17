NAME = libft.a

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRCs = 	ft_bzero.c \
	ft_isalpha.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_memset.c \
	ft_strlen.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_atoi.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_split.c \

OBJs = $(SRCs:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJs)
	ar rcs $(NAME) $(OBJs)

%.o:	%.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJs)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
.SILENT: all $(NAME) $(OBJs) clean fclean re
