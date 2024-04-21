# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzhdanov <rzhdanov <rzhdanov@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 17:44:31 by rzhdanov          #+#    #+#              #
#    Updated: 2024/04/21 22:00:37 by rzhdanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS_DIR = src/
OBJS_DIR = objs/

SRCS = $(wildcard $(SRCS_DIR)*.c)
OBJS = $(addprefix $(OBJS_DIR), $(notdir $(SRCS:.c=.o)))

all : $(OBJS_DIR) $(NAME)

$(OBJS_DIR) :
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

re : fclean all

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

.PHONY : clean fclean re all bonus