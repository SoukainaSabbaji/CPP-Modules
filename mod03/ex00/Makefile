# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 11:34:06 by ssabbaji          #+#    #+#              #
#    Updated: 2022/12/06 11:34:46 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ClapTrap.cpp main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= ClapTrap.hpp 

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= ClapTrap

all:			$(NAME)

$(NAME):		$(SRCS) $(HEADERS)
				c++ $(SRCS) $(CXXFLAGS) -o $(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)