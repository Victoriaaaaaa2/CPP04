NAME = a.out

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = MateriaSource.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re