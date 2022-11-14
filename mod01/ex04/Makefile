# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 14:47:33 by ssabbaji          #+#    #+#              #
#    Updated: 2022/11/14 14:20:06 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= replace

all:			$(NAME)

$(NAME):		$(OBJS) 
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)
