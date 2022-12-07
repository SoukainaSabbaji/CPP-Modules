# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 11:34:06 by ssabbaji          #+#    #+#              #
#    Updated: 2022/12/07 13:32:16 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ClapTrap.cpp ScavTrap.cpp main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= ClapTrap.hpp ScavTrap.hpp

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= ScavTrap

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)