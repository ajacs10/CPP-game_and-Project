# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 11:16:58 by asobrinh          #+#    #+#              #
#    Updated: 2025/05/26 17:35:47 by asobrinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CPP = c++
SRC = Zombie.cpp randomChump.cpp newZombie.cpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

RESET = \033[0m
BLUE = \033[1;34m
PINK = \033[1;35m
ANA = \033[1;36m
YELLOW = \033[1;33m
GREEN = \033[1;32m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(PINK)Bazinga $(BLUE)Compilando...$(RESET)"
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJ) > /dev/null 2>&1
	@echo "$(PINK)Bazinga $(ANA)Execução completa $(NAME) Bazinga $(RESET)"

%.o: %.cpp
	@echo " $(PINK)Bazinga $(BLUE)Compilando: $@$(RESET)"
	@$(CPP) $(FLAGS) -c $< -o $@ > /dev/null 2>&1

clean:
	@echo " $(PINK)Bazinga $(YELLOW) Limpando  objetos...$(RESET)"
	@rm -rf $(OBJ)

fclean: clean
	@echo "$(PINK)Bazinga $(YELLOW)Removendo binário...$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

