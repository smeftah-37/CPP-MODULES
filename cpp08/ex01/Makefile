NAME = ex01
SRC = main.cpp Span.cpp

OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++

all: $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(OBJ) $(CPPFLAGS) -o $(NAME) 
clean:
		rm -f $(OBJ)
fclean:
		rm -f $(OBJ) $(NAME)
re: fclean all