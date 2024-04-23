NAME = weapon
SRC = main.cpp HumanA.cpp  HumanB.cpp  Weapon.cpp 

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
OBJ = ${SRC:.cpp=.o}

CC = c++

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) 
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ) $(NAME)
re: fclean all