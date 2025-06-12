# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/31 17:16:52 by asobrinh          #+#    #+#              #
#    Updated: 2025/05/31 17:16:53 by asobrinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
SRC = ClapTrap.cpp ScavTrap.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98 
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
