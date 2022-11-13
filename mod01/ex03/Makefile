# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 17:14:09 by ssabbaji          #+#    #+#              #
#    Updated: 2022/11/12 18:28:30 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= HumanA.cpp main.cpp HumanB.cpp Weapon.cpp
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Weapon.hpp HumanB.hpp HumanA.hpp

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= attack

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)