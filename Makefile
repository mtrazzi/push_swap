# *************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtrazzi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/23 11:08:39 by mtrazzi           #+#    #+#              #
#    Updated: 2017/08/05 15:12:31 by mtrazzi          ###   ########.fr        #
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
					ft_do_op.c			\
					ft_free_lst.c

SRC1			=	$(addprefix $(SRC_PATH), $(SRC1_FILES))

SRC2_FILES		=	push_swap.c			\
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
					ft_do_op.c			\
					ft_min_rot.c		\
					ft_insert.c			\
					ft_env_utils.c		\
					ft_update.c			\
					ft_backtracking.c   \
					ft_process.c

SRC2			=	$(addprefix $(SRC_PATH), $(SRC2_FILES))

#--------------------------------------------------------------------------------
# OBJ
#--------------------------------------------------------------------------------

OBJ1_FILES		=	$(SRC1_FILES:.c=.o)

OBJ1			=	$(addprefix $(OBJ_PATH), $(OBJ1_FILES))

OBJ2_FILES		=	$(SRC2_FILES:.c=.o)

OBJ2			=	$(addprefix $(OBJ_PATH), $(OBJ2_FILES))

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

all: $(NAME_1) $(NAME_2)

$(NAME_1): $(LIB) $(OBJ1)
	@echo "Building $(NAME_1)..."
	$(CC) $(CFLAGS) $(LIB) $(OBJ1) -o $@
	@echo "\033[3;94m!$(NAME_1) built!\033[0m"

$(NAME_2): $(LIB) $(OBJ2)
	@echo "Building $(NAME_2)..."
	$(CC) $(CFLAGS) $(LIB) $(OBJ2) -o $@
	@echo "\033[3;94m!$(NAME_2) built!\033[0m"

$(LIB):
	@$(MAKE) -C $(LIB_PATH) $(LIB_FILE)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(HEADERS) $(LIB)
	@mkdir -p obj
	$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
	@make -C $(LIB_PATH) fclean
	@/bin/rm -f $(OBJ1)
	@/bin/rm -f $(OBJ2)

fclean: clean
	@/bin/rm -f $(NAME_1)
	@/bin/rm -f $(NAME_2)

re: fclean all

norme: fclean
	norminette $(SRC1)
	norminette $(SRC2)
	norminette $(LIB_PATH)
	norminette $(INC_PATH)
linux: $(LIB)
	@echo "Building $(NAME_1)..."
	$(CC) $(CFLAGS) $(SRC1) $(INC) $(LIB) -o $(NAME_1)
	@echo -e "\033[3;94m!$(NAME_1) built!\033[0m"
	@echo "Building $(NAME_2)..."
	$(CC) $(CFLAGS) $(SRC2) $(INC) $(LIB) -o $(NAME_2)
	@echo -e "\033[3;94m!$(NAME_2) built!\033[0m"
	
.PHONY: all, clean, fclean, re, norme
