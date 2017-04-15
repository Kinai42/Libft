:x
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/10 19:02:58 by dbauduin          #+#    #+#              #
#    Updated: 2017/04/14 21:16:16 by dbauduin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc

CFLAGS	=	-I./include -Wall -Werror -Wextra

RM		=	/bin/rm

NAME	=	libft.a

SRC		=	$(wildcard *.c)

OBJ		=	$(subst .c,.o,$(SRC))

RED		=	@echo "\033[31m Clean\n\033[0m"
GREEN	=	@echo "\033[32m Compile\033[0m"

$(NAME)	:
	@$(CC) -c $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	$(GREEN)

all		:	$(NAME)

clean	:
	@$(RM) -rf $(OBJ) core *~
	$(RED)

fclean	:	clean
	@$(RM) -rf $(NAME)

re		:	fclean all
