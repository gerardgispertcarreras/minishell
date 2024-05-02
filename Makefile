# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggispert <ggispert@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 17:44:31 by rzhdanov          #+#    #+#              #
#    Updated: 2024/05/02 15:55:40 by ggispert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRCS_DIR = src/
OBJS_DIR = objs/
INC_DIR = inc/
LIB_INCLUDES = $(INC_DIR)/libft/inc/
LIBFT_PATH = $(INC_DIR)/Libft/
LIBFT_NAME = ft
LIBFT = $(LIBFT_PATH)lib$(LIBFT_NAME).a

SRC = $(addsuffix .c, ) \
OBJS = $(SRCS:$(SRCSDIR)/%.c=$(OBJSDIR)/%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
INCFLAGS = $(addprefix -I,$(INC_DIR) $(LIB_INCLUDES))

all :
	@$(MAKE) -C $(LIBFT_PATH) -s
	@$(MAKE) $(NAME) -s

$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: %.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(NAME) : $(OBJSDIR) $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -o $@


clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all bonus