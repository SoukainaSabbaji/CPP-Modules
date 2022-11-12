# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 17:14:09 by ssabbaji          #+#    #+#              #
#    Updated: 2022/11/10 16:17:19 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= PhoneBook.cpp main.cpp Contact.cpp
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= PhoneBook.hpp Contact.hpp

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= PhoneBook

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS) 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)