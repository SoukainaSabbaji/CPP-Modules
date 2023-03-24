
SRCS			= main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= PmergeMe.hpp 

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= PmergeMe

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS)  -fsanitize=address

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)