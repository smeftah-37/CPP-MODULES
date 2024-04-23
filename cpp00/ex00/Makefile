NAME = megaphone
SRC =  megaphone.cpp

OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) 
clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(OBJ) $(NAME)
re: fclean all