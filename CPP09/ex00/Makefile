NAME			=	btc
CC				=	c++
RM				=	rm -f
CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror

SRC				=	main.cpp BitcoinExchange.cpp utils.cpp HandleInput.cpp

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
