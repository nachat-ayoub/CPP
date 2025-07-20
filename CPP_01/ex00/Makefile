NAME      = zombie

CPPFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS      = main.cpp Zombie.hpp Zombie.cpp newZombie.cpp randomChump.cpp
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
