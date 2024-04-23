NAME = Animal
SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp

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