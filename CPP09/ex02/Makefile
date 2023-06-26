NAME			=	PmergeMe
CC				=	c++
RM				=	rm -f
CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror -fsanitize=address -g

SRC				=	main.cpp pair_operator.cpp trySet.cpp Jacobsthal.cpp PmergeMe_stream.cpp

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
