# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzhdanov <rzhdanov <rzhdanov@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 17:44:31 by rzhdanov          #+#    #+#              #
#    Updated: 2024/05/05 21:47:19 by rzhdanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS_DIR = src/
OBJS_DIR = objs/
LIBFT = ./libft/libft.a
INCLUDES = -I./inc

SRCS = $(wildcard $(SRCS_DIR)*.c)
OBJS = $(addprefix $(OBJS_DIR), $(notdir $(SRCS:.c=.o)))

all : $(NAME)

$(OBJS_DIR) :
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c $(LIBFT) | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -lreadline -o $@ $(INCLUDES)

$(LIBFT):
	$(MAKE) -C ./libft

re : fclean all

clean :
	$(RM) $(OBJS_DIR)
	$(MAKE) clean -C ./libft

fclean : clean
	$(RM) $(NAME)
	$(MAKE) fclean -C ./libft

.PHONY : clean fclean re all bonus