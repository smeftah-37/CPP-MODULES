NAME = btc
SRC = main.cpp BitcoinExchange.cpp

OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++

all: $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(CPPFLAGS)  $(OBJ) -o $(NAME) 
clean:
		rm -f $(OBJ)
fclean:
		rm -f $(OBJ) $(NAME)
re: fclean all