NAME = ex03
SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp 
CXXFLAGS =  -Wall -Werror -Wextra  -std=c++98 
 
OBJ = ${SRC:.cpp=.o}

CC = c++

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) 
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(OBJ) $(NAME)
re: fclean all