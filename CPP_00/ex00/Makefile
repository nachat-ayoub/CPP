NAME      = megaphone

CPPFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS      = megaphone.cpp
OBJS      = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):  $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
