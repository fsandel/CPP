NAME			=	RPN
CC				=	c++
RM				=	rm -f
CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror

SRC				=	main.cpp RPN.cpp RPN_utils.cpp RPN_math.cpp

OBJ				=	$(SRC:.cpp=.o)

all:				$(NAME)

$(NAME):		$(OBJ)
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

.PHONY:			all clean fclean re
