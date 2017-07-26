# *************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/23 11:08:39 by mtrazzi           #+#    #+#              #
#    Updated: 2017/07/26 15:27:08 by mtrazzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_1			=	checker

NAME_2			=	push_swap

CC				=	clang

FLAGS			=	-Wall -Wextra

#--------------------------------------------------------------------------------
# PATHS
#--------------------------------------------------------------------------------

SRC_PATH		=	./src/

INC_PATH		=	./includes/

OBJ_PATH		=	./obj/

LIB_PATH		=	./libft/

#--------------------------------------------------------------------------------
# SRC
#--------------------------------------------------------------------------------

SRC1_FILES		=	checker.c			\
					ft_add.c			\
					ft_parse.c			\
					ft_print.c			\
					ft_check_argv.c		\
					ft_error.c			\
					ft_delete.c			\
					ft_parse_stdin.c	\
					ft_op_utils.c		\
					ft_check_pile.c		\
					ft_stack_utils.c	\
					ft_swap.c			\
					ft_push.c			\
					ft_rotate.c			\
					ft_rrotate.c		\
					ft_do_op.c

SRC1			=	$(addprefix $(SRC_PATH), $(SRC1_FILES))

#--------------------------------------------------------------------------------
# OBJ
#--------------------------------------------------------------------------------

OBJ1_FILES		=	$(SRC1_FILES:.c=.o)

OBJ1			=	$(addprefix $(OBJ_PATH), $(OBJ1_FILES))

#--------------------------------------------------------------------------------
# INC
#--------------------------------------------------------------------------------

INC				=	$(addprefix -I, $(INC_PATH))

HEADER_FILES	=	libft.h		\
					push_swap.h

HEADERS			=	$(addprefix $(INC_PATH), $(HEADERS_FILES))

#--------------------------------------------------------------------------------
# DEPENDENCIES
#--------------------------------------------------------------------------------

LIB_FILE		=	libft.a

LIB				=	$(addprefix $(LIB_PATH), $(LIB_FILE))

#--------------------------------------------------------------------------------
# RULES
#--------------------------------------------------------------------------------

all: $(NAME_1)

$(NAME_1): $(LIB) $(OBJ1)
	@echo "Building $(NAME_1)..."
	$(CC) $(CFLAGS) $(LIB) $(OBJ1) -o $@
	@echo "\033[3;94m!$(NAME_1) built!\033[0m"

$(LIB):
	@$(MAKE) -C $(LIB_PATH) $(LIB_FILE)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(HEADERS) $(LIB)
	@mkdir -p obj
	$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
	@make -C $(LIB_PATH) fclean
	@/bin/rm -f $(OBJ1)

fclean: clean
	@/bin/rm -f $(NAME_1)

re: fclean all

norme: fclean
	norminette $(SRC1)
	norminette $(LIB_PATH)
	norminette $(INC_PATH)

.PHONY: all, clean, fclean, re, norme
