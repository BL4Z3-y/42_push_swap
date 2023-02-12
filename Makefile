# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 15:29:33 by yes-slim          #+#    #+#              #
#    Updated: 2023/02/12 09:34:16 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -c
NAME = push_swap
DEL = rm -f

FT_PRINTF = ft_printf_helpers ft_printf
LIBFT = ft_list functions ft_join ft_split
HELPERS = check_args ft_error ft_fill
INSTRUC = ins_push ins_swap ins_rotate ins_rev_rotate

SRCS =	$(addsuffix .c, $(addprefix Srcs/ft_printf/, $(FT_PRINTF))) \
		$(addsuffix .c, $(addprefix Srcs/libft/, $(LIBFT))) \
		$(addsuffix .c, $(addprefix Srcs/helpers/, $(HELPERS))) \
		$(addsuffix .c, $(addprefix instructions/, $(INSTRUC))) \

OBJ = $(SRCS:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ) push_swap.c
	ar -rc push_swap.a $(OBJ)
	cc push_swap.c push_swap.a -o $(NAME)
	clear

clean :
	$(DEL) $(OBJ) push_swap.a 

fclean : clean
	$(DEL) $(OBJ) $(NAME)

re : fclean all


.PHONY : all clean fclean re