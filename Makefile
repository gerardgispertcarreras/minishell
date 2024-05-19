# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 17:44:31 by rzhdanov          #+#    #+#              #
#    Updated: 2024/05/19 15:16:08 by rzhdanov         ###   ########.fr        #
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

all : 
	@$(MAKE) -C $(LIBFT_PATH) -s
	@$(MAKE) $(NAME) -s
#@echo "minishell executable is ready"

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(LIBFT) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -lreadline -o $@ $(INCLUDES)

#$(LIBFT):
#	$(MAKE) -C ./libft

re : fclean all

clean :
	$(RM) $(OBJ_DIR)
	$(MAKE) clean -C ./libft -s
	@echo "clean command executed"

fclean : clean
	$(RM) $(NAME)
	$(MAKE) fclean -C ./libft -s
	@echo "fclean command executed"

.PHONY : clean fclean re all