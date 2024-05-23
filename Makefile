# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 17:44:31 by rzhdanov          #+#    #+#              #
#    Updated: 2024/05/23 22:52:33 by rzhdanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC_DIR = src
OBJ_DIR = obj
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a
INCLUDES = -I./inc
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -Iink
RM = rm -rf

SRCS = 		main.c \
			errors.c \
			pipes.c \
			utils.c \
			signals/ft_signals.c \
			utils/ft_get_next_line.c \
			utils/ft_get_next_line_utils.c \

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all : $(LIBFT) $(NAME)
	@echo "minishell executable is ready"

$(LIBFT) :
	@$(MAKE) -C $(LIBFT_PATH) -s

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -lreadline -o $(NAME)

$(OBJS) : $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) -c $(CFLAGS) -I/usr/local/opt/readline/include/ -o $@ $<

#$(LIBFT):
#	$(MAKE) -C ./libft

re : fclean all

clean :
	rm -fr $(OBJ_DIR)
	$(MAKE) clean -C $(LIBFT_PATH) -s
	@echo "clean command executed"

fclean : clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH) -s
	@echo "fclean command executed" 

.PHONY : clean fclean re all