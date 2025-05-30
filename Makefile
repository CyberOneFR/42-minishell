# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 17:15:05 by ethebaul          #+#    #+#              #
#    Updated: 2025/05/25 11:50:39 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

-include	./make/improved.mk

BUILDIR		=	./build/
HEADERS		=	./headers/\
				./headers/parsing/\
				./headers/types/

SRCS		=	./srcs/main.c\
				./srcs/types/string/ftstrlen.c\
				./srcs/types/string/ftstring.c\
				./srcs/parsing/syntax/syntaxer.c\
				./srcs/parsing/syntax/syntax_operator/syntax_pipe.c\
				./srcs/parsing/syntax/syntax_operator/syntax_and.c\
				./srcs/parsing/syntax/syntax_operator/syntax_dquote.c\
				./srcs/parsing/syntax/syntax_operator/syntax_or.c\
				./srcs/parsing/syntax/syntax_operator/syntax_squote.c\
				./srcs/parsing/syntax/syntax_operator/syntax_open.c\
				./srcs/parsing/syntax/syntax_operator/syntax_close.c\
				./srcs/parsing/syntax/syntax_operator/syntax_heredoc.c\
				./srcs/parsing/syntax/syntax_operator/syntax_in.c\
				./srcs/parsing/syntax/syntax_operator/syntax_out.c\
				./srcs/parsing/syntax/syntax_operator/syntax_append.c\
				./srcs/parsing/syntax/syntax_operator.c\
				./srcs/parsing/skipto.c\
				./srcs/parsing/lexer/lexer.c\
				./srcs/alloc/smalloc.c\
				./srcs/print/swrite.c

VPATH       := $(sort $(dir $(SRCS)))

OBJS		=	$(addprefix $(BUILDIR), $(notdir $(SRCS:.c=.o)))
DEPS        =   $(addprefix $(BUILDIR), $(notdir $(SRCS:.c=.d)))
HDRS		=	$(addprefix -I, $(HEADERS))

NAME		=	minishell

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -O3 -march=native
LIBS		=	-lreadline

all: $(NAME)
	@echo -e
	@echo -e $(FGREEN)Successfully compiled $<$(RESET)

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
	@echo -e
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