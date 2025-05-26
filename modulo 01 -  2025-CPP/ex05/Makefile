# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 15:38:23 by asobrinh          #+#    #+#              #
#    Updated: 2025/05/26 15:38:24 by asobrinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CPP = c++
SRC = Harl.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

%.o:%.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
fclean:
	@rm -f $(NAME) $(OBJ)
re: fclean all

.PHONY: clean fclean all
