# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 11:34:06 by ssabbaji          #+#    #+#              #
#    Updated: 2022/12/08 11:38:16 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ClapTrap.cpp FragTrap.cpp main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= ClapTrap.hpp FragTrap.hpp

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= FragTrap

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)