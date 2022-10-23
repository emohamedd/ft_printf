# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 15:58:46 by emohamed          #+#    #+#              #
#    Updated: 2022/10/23 22:42:51 by emohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = gcc -Wall -Wextra -Werror -I.

# CFLAGS = -Wall -Wextra -Werror -I.

NAME = libftprintf.a

SRCS = ft_adress.c ft_hexa.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c ft_putnbru.c
 
OBJS = $(SRCS:.c=.o)

# %.o : %.c
# 	$(CC) $(CFLAGS) -c $^
	
$(NAME): $(OBJS)
	CC $(SRCS) -c
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all  clean fclean re 