# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 16:34:32 by asobrinh          #+#    #+#              #
#    Updated: 2025/05/26 17:37:28 by asobrinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bazinga
CPP = c++
SRC = main.cpp
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
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(PINK)Bazinga $(ANA)Execução completa $(NAME) Bazinga $(RESET)"

%.o: %.cpp
	@echo " $(PINK)Bazinga $(BLUE)Compilando: $@$(RESET)"
	$(CPP) $(FLAGS) -c $< -o $@


clean:
	@echo " $(PINK)Bazinga $(YELLOW) Limpando  objetos...$(RESET)"
	@rm -rf $(OBJ)

fclean: clean
	@echo "$(PINK)Bazinga $(YELLOW)Removendo binário...$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

