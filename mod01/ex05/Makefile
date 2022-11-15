# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 17:14:09 by ssabbaji          #+#    #+#              #
#    Updated: 2022/11/14 16:09:16 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Harl.cpp main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Harl.hpp 

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= Harl

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)