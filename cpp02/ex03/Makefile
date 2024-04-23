NAME = fixed_point
SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) 
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ) $(NAME)
re: fclean all