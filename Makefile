# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzhdanov <rzhdanov <rzhdanov@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 17:44:31 by rzhdanov          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2024/05/05 21:47:19 by rzhdanov         ###   ########.fr        #
=======
#    Updated: 2024/05/12 23:03:23 by rzhdanov         ###   ########.fr        #
>>>>>>> origin/T-1-makefile
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC_DIR = src
OBJ_DIR = obj
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a
INCLUDES = -I./inc

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
<<<<<<< HEAD
SRCS_DIR = src/
OBJS_DIR = objs/
LIBFT = ./libft/libft.a
INCLUDES = -I./inc
=======
>>>>>>> origin/T-1-makefile

all : 
	@$(MAKE) -C $(LIBFT_PATH) -s
	@$(MAKE) $(NAME) -s
	@echo "minishell executable is ready"

<<<<<<< HEAD
all : $(NAME)
=======
$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)
>>>>>>> origin/T-1-makefile

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(LIBFT) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

<<<<<<< HEAD
$(OBJS_DIR)%.o: $(SRCS_DIR)%.c $(LIBFT) | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -lreadline -o $@ $(INCLUDES)

$(LIBFT):
	$(MAKE) -C ./libft
=======
$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -lreadline -o $@ $(INCLUDES)

#$(LIBFT):
#	$(MAKE) -C ./libft
>>>>>>> origin/T-1-makefile

re : fclean all

clean :
<<<<<<< HEAD
	$(RM) $(OBJS_DIR)
	$(MAKE) clean -C ./libft

fclean : clean
	$(RM) $(NAME)
	$(MAKE) fclean -C ./libft
=======
	$(RM) $(OBJ_DIR)
	$(MAKE) clean -C ./libft -s
	@echo "clean command executed"

fclean : clean
	$(RM) $(NAME)
	$(MAKE) fclean -C ./libft -s
	@echo "fclean command executed"
>>>>>>> origin/T-1-makefile

.PHONY : clean fclean re all