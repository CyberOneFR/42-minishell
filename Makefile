# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 17:15:05 by ethebaul          #+#    #+#              #
#    Updated: 2025/05/25 04:05:16 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

-include	./make/improved.mk

BUILDIR		=	./build/
HEADERS		=	./headers/\
				./headers/parsing/\
				./headers/types/

SRCS		=	./srcs/main.c\
				./srcs/parsing/lexer.c\
				./srcs/types/string/ftstrlen.c\
				./srcs/types/string/ftstring.c

VPATH       := $(sort $(dir $(SRCS)))

OBJS		=	$(addprefix $(BUILDIR), $(notdir $(SRCS:.c=.o)))
DEPS        =   $(addprefix $(BUILDIR), $(notdir $(SRCS:.c=.d)))
HDRS		=	$(addprefix -I, $(HEADERS))

NAME		=	minishell

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -O3 -march=native
LIBS		=	-lreadline

all: $(NAME)
	@echo $(FGREEN)#### Successfully compiled $<####$(RESET)

$(NAME): $(OBJS)
	@echo -e $(FRED)
	@$(CC) $(CFLAGS) $(HDRS) $(LIBS) -o $@ $^
	@echo -e $(FGREEN)compiling $@$(RESET)

$(BUILDIR)%.o: %.c | $(BUILDIR)
	@echo -e $(FRED)
	@$(CC) $(CFLAGS) $(HDRS) -MD -MP -o $@ -c $<
	@echo -e - $(FGREEN)compiling $<$(RESET)

$(BUILDIR):
	@mkdir -p $@
	@echo -e $(FGREEN)created $(BUILDIR)$(RESET)

-include	$(DEPS)

clean:
	@echo -e $(FRED)
	@rm -rf $(BUILDIR)
	@echo -e $(FGREEN)deleted all build files$(RESET)

fclean: clean
	@echo -e $(FRED)
	@rm -f $(NAME)
	@echo -e $(FGREEN)deleted program file$(RESET)

test:
	@echo $(OBJS)

re: fclean all

.PHONY : all clean fclean re