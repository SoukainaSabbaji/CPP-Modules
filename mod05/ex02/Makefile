# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssabbaji <ssabbaji@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:03:04 by ssabbaji          #+#    #+#              #
#    Updated: 2022/12/24 13:47:59 by ssabbaji         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= Bureaucrat.cpp AForm.cpp main.cpp  ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS			= $(SRCS:.cpp=.o)
HEADERS			= Bureaucrat.hpp AForm.hpp  ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 

NAME			= Bureaucrat

all:			$(NAME)
# -fsanitize=address

$(NAME):		$(SRCS) $(HEADERS)
				c++ $(SRCS) $(CXXFLAGS) -o $(NAME) 

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)