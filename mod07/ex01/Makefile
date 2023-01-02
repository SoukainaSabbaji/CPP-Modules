# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 15:32:29 by ssabbaji          #+#    #+#              #
#    Updated: 2023/01/02 15:32:47 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Iter.hpp

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= Iter

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS)  -fsanitize=address

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)