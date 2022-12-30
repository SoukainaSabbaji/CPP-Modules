# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 13:20:21 by ssabbaji          #+#    #+#              #
#    Updated: 2022/12/30 17:49:56 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Base.cpp Aclass.cpp Aclass.cpp Cclass.cpp Bclass.cpp main.cpp  
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Base.hpp Aclass.hpp Aclass.hpp Bclass.hpp Cclass.hpp

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= Data

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				c++ $(CXXFLAGS) -o $(NAME) $(OBJS)  -fsanitize=address

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)
