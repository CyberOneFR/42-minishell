# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 17:15:05 by ethebaul          #+#    #+#              #
#    Updated: 2025/06/10 02:00:55 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_DIR	=	./build/
HEADERS_DIR	=	./headers/
SRCS_DIR	=	./srcs/

MKCONFIGURE	=	./configure.mk
MKHEADERS	=	./headers.mk
MKSRCS		=	./srcs.mk
MKIMPROVED	=	./improved.mk

-include	$(MKHEADERS) $(MKSRCS)

VPATH       =	$(sort $(dir $(SRCS)))

OBJS		=	$(addprefix $(BUILD_DIR), $(notdir $(SRCS:.c=.o)))
DEPS        =   $(addprefix $(BUILD_DIR), $(notdir $(SRCS:.c=.d)))
HDRS		=	$(addprefix -I, $(HEADERS))

NAME		=	minishell

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -O3 -march=native
LIBS		=	-lreadline

-include	$(MKIMPROVED)

all: $(NAME)
	@echo -e
	@echo -e $(FGREEN)Successfully compiled $<$(RESET)

$(NAME): $(OBJS)
	@echo -e $(FRED)
	@$(CC) $(CFLAGS) $(HDRS) $(LIBS) -o $@ $^
	@echo -e $(FGREEN)compiling $@$(RESET)

$(BUILD_DIR)%.o: %.c | $(BUILD_DIR)
	@echo -e $(FRED)
	@$(CC) $(CFLAGS) $(HDRS) -MD -MP -o $@ -c $<
	@echo -e - $(FGREEN)compiling $<$(RESET)

$(BUILD_DIR):
	@mkdir -p $@
	@echo -e
	@echo -e $(FGREEN)created $(BUILD_DIR)$(RESET)

-include $(DEPS) $(MKCONFIGURE)

clean:
	@echo -e $(FRED)
	@rm -rf $(BUILD_DIR)
	@echo -e $(FGREEN)deleted all build files$(RESET)

fclean: clean
	@echo -e $(FRED)
	@rm -f $(NAME)
	@echo -e $(FGREEN)deleted program file$(RESET)

test:
	@echo $(OBJS)

re: fclean all

.PHONY : all configure clean fclean re