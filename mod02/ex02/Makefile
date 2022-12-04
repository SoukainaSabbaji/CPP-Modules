# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 16:30:51 by ssabbaji          #+#    #+#              #
#    Updated: 2022/12/04 13:32:09 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Fixed.cpp main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Fixed.hpp 

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= Fixed

all:			$(NAME)

$(NAME):		$(SRCS) $(HEADERS)
				c++ $(SRCS) $(CXXFLAGS) -o $(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)