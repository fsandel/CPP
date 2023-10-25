# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 09:53:10 by fsandel           #+#    #+#              #
#    Updated: 2023/04/03 12:50:18 by fsandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	a.out
CC				=	c++
RM				=	rm -f
CPPFLAGS		=	-std=c++98 -Wall -Wextra -Werror

SRC				=	main.cpp Materia/AMateria.cpp Materia/Cure.cpp Character/Character.cpp \
					MateriaSource/MateriaSource.cpp

OBJ				=	$(SRC:.cpp=.o)

test:				all clean
					./$(NAME)

all:				$(NAME)
				
$(NAME):			$(OBJ)
					$(CC) $^ -o $@ $(CPPFLAGS)

%.o:				%.cpp
					$(CC) -c $< -o $*.o $(CPPFLAGS)

clean:
					$(RM) $(OBJ)

fclean:			
					$(RM) $(OBJ)
					$(RM) $(NAME)

re:
					make fclean
					make all

.PHONY:				all clean fclean re
