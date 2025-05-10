CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(wildcard *.cpp) 

OBJ = $(SRC:.cpp=.o)

NAME = ClapTrap

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
	
fclean:	clean
	rm -rf $(NAME)

re: fclean all