# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 15:29:33 by yes-slim          #+#    #+#              #
#    Updated: 2023/03/03 12:33:43 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -I includes
NAME = push_swap
NAME_B = checker
DEL = rm -f

FT_PRINTF = ft_printf_helpers ft_printf
LIBFT = ft_list functions ft_join ft_split
HELPERS = check_args ft_error ft_fill arr_sort
INSTRUC = ins_push ins_swap ins_rotate ins_rev_rotate
SORT = sort_less_5 sort_hundred
BNS = ft_1 ins_rev_rotate_bonus ins_push_bonus ins_swap_bonus ins_rotate_bonus 
GNL = get_next_line get_next_line_utils

SRCS =	$(addsuffix .c, $(addprefix Srcs/ft_printf/, $(FT_PRINTF))) \
		$(addsuffix .c, $(addprefix Srcs/libft/, $(LIBFT))) \
		$(addsuffix .c, $(addprefix Srcs/helpers/, $(HELPERS))) \
		$(addsuffix .c, $(addprefix instructions/, $(INSTRUC))) \
		$(addsuffix .c, $(addprefix sorting/, $(SORT)))		
BSRCS = $(addsuffix .c, $(addprefix Srcs/gnl/, $(GNL))) \
		$(addsuffix .c, $(addprefix bonus/, $(BNS)))

OBJ = $(SRCS:.c=.o)
BOBJ = $(BSRCS:.c=.o)

%.o : %.c
	@cc $(CFLAGS) -c $< -o $@

all : $(NAME)

bonus : $(NAME_B)

$(NAME) : $(OBJ) push_swap.c
	@ar -rc push_swap.a $(OBJ)
	@cc push_swap.c push_swap.a -I includes  -o $(NAME)
	@clear
	@echo "✅\033[0;35m Your \033[0;33mpush_swap \033[0;35mprogram is created \033[0m"

$(NAME_B) : $(OBJ) $(BOBJ) checker.c
	@ar -rc push_swap_bonus.a $(OBJ) $(BOBJ)
	@cc checker.c push_swap_bonus.a -I includes -o checker
	@clear
	@echo "✅\033[0;35m Checker program is created\033[0m"

clean :
	@$(DEL) $(OBJ) push_swap.a push_swap_bonus.a
	@echo "✅ \033[0;32mCleaning done\033[0m"

fclean : clean
	@$(DEL) $(OBJ) $(BOBJ) $(NAME) checker

re : fclean all

.PHONY : all clean fclean re bonus