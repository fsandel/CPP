# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 09:53:10 by fsandel           #+#    #+#              #
#    Updated: 2023/05/29 17:00:01 by fsandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	convert
CC				=	c++
RM				=	rm -f
CPPFLAGS		=	-std=c++98 -Wall -Wextra -Werror -Wunreachable-code -Wconversion

SRC				=	main.cpp ScalarConverter.cpp ScalarConverterIdentity.cpp ScalarConverterIdentityUtils.cpp

OBJ				=	$(SRC:.cpp=.o)

all:				$(NAME)
				
$(NAME):			$(OBJ)
					$(CC) $^ -o $@ $(CPPFLAGS)

%.o:				%.cpp
					$(CC) -o $@ -c $< $(CPPFLAGS)

clean:
					$(RM) $(OBJ)

fclean:			
					$(RM) $(OBJ)
					$(RM) $(NAME)

re:
					make fclean
					make all

.PHONY:				all clean fclean re
