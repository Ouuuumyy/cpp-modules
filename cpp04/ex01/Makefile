NAME = AnimalWithBrain

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)

