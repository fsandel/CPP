# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 09:53:10 by fsandel           #+#    #+#              #
#    Updated: 2023/06/01 20:45:25 by fsandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	a.out
CC				=	c++
RM				=	rm -f
CPPFLAGS		=	-std=c++98 -Wall -Wextra -Werror

SRC				=	main.cpp

OBJ				=	$(SRC:.cpp=.o)

all:				$(NAME)
				
$(NAME):			$(OBJ)
					$(CC) $^ -o $@ $(CPPFLAGS)

%.o:				%.cpp
					$(CC) -o $@ -c $< $(CPPFLAGS) -I.

clean:
					$(RM) $(OBJ)

fclean:			
					$(RM) $(OBJ)
					$(RM) $(NAME)

re:
					make fclean
					make all

.PHONY:				all clean fclean re
