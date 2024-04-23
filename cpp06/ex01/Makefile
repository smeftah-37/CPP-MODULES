NAME = ex01
SRC = main.cpp Serialize.cpp

OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) 
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ) $(NAME)
re: fclean all  