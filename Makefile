# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/10 19:02:58 by dbauduin          #+#    #+#              #
#    Updated: 2017/04/11 21:00:21 by dbauduin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SOURCE1	=	ft_*.c

OBJET	=	%.o: %.c

all		:
	gcc -c -Werror -Wall -Wextra $(SOURCE1) $(SOURCE2) -I includes/
	ar rc $(NAME) $(OBJET)

clean	:
	rm -Rf $(OBJET)

fclean	:	clean
	rm -Rf $(NAME)

re		:	fclean all
