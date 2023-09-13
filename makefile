#	int	c;
 **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdel-cas <gdel-cas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 16:11:22 by gdel-cas          #+#    #+#              #
#    Updated: 2023/09/13 16:11:23 by gdel-cas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

