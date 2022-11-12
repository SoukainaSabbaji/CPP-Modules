# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 17:14:09 by ssabbaji          #+#    #+#              #
#    Updated: 2022/11/12 17:33:59 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp 
OBJS			= $(SRCS:.cpp=.o) 

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= Zombie

all:			$(NAME)

$(NAME):		$(OBJS) 
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)