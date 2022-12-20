# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:03:04 by ssabbaji          #+#    #+#              #
#    Updated: 2022/12/20 17:51:39 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Bureaucrat.cpp main.cpp 
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Bureaucrat.hpp 

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= Bureaucrat

all:			$(NAME)

$(NAME):		$(SRCS) $(HEADERS)
				c++ $(SRCS) $(CXXFLAGS) -o $(NAME) -fsanitize=address

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)