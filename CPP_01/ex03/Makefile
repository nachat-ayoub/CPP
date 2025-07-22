NAME      = zombie

CPPFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS      = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS      = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):  $(OBJS)
	c++ $(OBJS) -o $(NAME)

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
