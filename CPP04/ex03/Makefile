# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 09:53:10 by fsandel           #+#    #+#              #
#    Updated: 2023/03/17 18:06:32 by fsandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	a.out
CC				=	c++
RM				=	rm -f
CPPFLAGS		=	-std=c++98 -Wall -Wextra -Werror

SRC				=	main.cpp AMateria.cpp ICharacter.cpp Cure.cpp Character.cpp

OBJ				=	$(SRC:.cpp=.o)

all:				$(NAME)
				
$(NAME):			$(OBJ)
					$(CC) $^ -o $@ $(CPPFLAGS)

%.o:				%.cpp
					$(CC) -c $< $(CPPFLAGS)
clean:
					$(RM) $(OBJ)

r:
					make all
					make clean
					./$(NAME)
					
fclean:			
					$(RM) $(OBJ)
					$(RM) $(NAME)

re:
					make fclean
					make all

.PHONY:				all clean fclean re
