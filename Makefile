# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 11:56:18 by tmasethe          #+#    #+#              #
#    Updated: 2018/09/13 12:59:55 by tmasethe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	lem-in

FILES			=	lem-in.c get_rooms.c check.c

OBJ 			=	$(FILES:.c=.o)

LDFLAGS			=	-L./libft/

LFT				=	-lft

CC				=	gcc $(CFLAGS)

CFLAGS			=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(OBJ)
	@make -C ./libft/
	@echo "Hurray!!! Libft.a is made."
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ) -o $@

clean:	cleanlib
	@rm -f $(OBJ)

cleanlib:
	@make clean -C ./libft/

fclean:	clean fcleanlib
	@rm -f $(NAME)

fcleanlib:
	@make fclean -C ./libft/

re : fclean all

norme:
	norminette *.c *.h

.PHONY : all clean fclean re
