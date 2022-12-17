# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 11:53:04 by ssabbaji          #+#    #+#              #
#    Updated: 2022/12/12 13:34:40 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= WrongAnimal.cpp WrongCat.cpp Animal.cpp  Brain.cpp Dog.cpp Cat.cpp main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Animal.hpp Cat.hpp Dog.hpp  WrongAnimal.hpp WrongCat.hpp Brain.hpp

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= Animal

all:			$(NAME)

$(NAME):		$(SRCS) $(HEADERS)
				c++ $(SRCS) $(CXXFLAGS) -o $(NAME) -fsanitize=address

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)