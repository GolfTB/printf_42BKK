# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paphetpr <marvin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 20:13:25 by paphetpr          #+#    #+#              #
#    Updated: 2024/11/16 03:58:06 by paphetpr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c\
		ft_print_char.c\
		ft_print_string.c\
		ft_print_pointer.c\
		ft_print_int.c\
		ft_print_unsigned_int.c\
		ft_print_hexidecimal.c

OBJS := $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean fclean re all