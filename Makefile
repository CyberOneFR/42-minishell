# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 17:15:05 by ethebaul          #+#    #+#              #
#    Updated: 2025/05/25 02:55:30 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

-include	./make/improved.mk

BUILDIR		=	./build/
HEADERS		=	./headers/

SRCS		=	main.c
				
DEPS		=	$(addprefix $(BUILDIR), $(SRCS:.c=.d))
OBJS		=	$(addprefix $(BUILDIR), $(SRCS:.c=.o))
HEADERS		=	$(addprefix -I, $(SRCS:.c=.o))

NAME		=	GigaChell

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -O3 -march=native -I$(HEADERS)

all: $(NAME)
	@echo Building $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $(OBJS)
	@echo compiling

$(BUILDIR)%.o: %.c | $(BUILDIR)
	@$(CC) $(CFLAGS) -MD -MP -o $@ -c $<

$(BUILDIR):
	@mkdir -p $@

-include	$(DEPS)

clean:
	@rm -rf $(BUILDIR)
	@echo deleted all build files

fclean: clean
	@rm -f $(NAME)
	@echo deleted program file

re: fclean all

test:
	@echo -e $(DUNDERLINE) ok but $(NOUNDERLINE) actually

.PHONY : all clean fclean re