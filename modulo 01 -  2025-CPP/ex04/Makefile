# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 19:28:37 by asobrinh          #+#    #+#              #
#    Updated: 2025/05/08 19:28:38 by asobrinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CPP = c++
SRC = replace.cpp args.cpp main.cpp

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
