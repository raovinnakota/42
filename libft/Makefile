# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvinnako <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/02 16:59:11 by rvinnako          #+#    #+#              #
#    Updated: 2017/03/03 16:30:51 by rvinnako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
HEADER = libft.h

all: $(NAME)

$(NAME):	
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
