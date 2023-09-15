NAME = libft.a

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRCs = ft_bzero.c \
	ft_isalpha.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_memset.c \
	ft_strlen.c \
	ft_isprint.c \

OBJs = $(SRCs:.c=.o)

all : $(NAME)

$(NAME) : $(OBJs)
	ar rcs $(NAME) $(OBJs)
	
clean :
	$(RM) $(OBJs)

fclean : clean
	$(RM) $(NAME)

re : fclean all
