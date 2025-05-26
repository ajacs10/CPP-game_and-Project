# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asobrinh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 15:13:52 by asobrinh          #+#    #+#              #
#    Updated: 2025/01/25 14:34:42 by asobrinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -s
INCLUDE = -I.-I

SRC_CPP = conctat_get_set.cpp \
           conctat_and_phonebook_main.cpp \
           phonebook.cpp \
           phonebook_utils_two.cpp

OBJ_CPP = $(SRC_CPP:.cpp=.o)
OBJ = $(OBJ_CPP)

NEON_PINK = \033[95m
ANA     =  \033[38;5;201m
FINAL   =  \033[0m
FIRST_RUN_FLAG = .first_run_flag
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(INCLUDE) -o $(NAME) $(OBJ) > /dev/null
	@echo "$(ANA)                  SEJA BEM-VINDO OU BEM-VINDA CADETE AO MEU PROJETO $(FINAL)"
	@echo "$(ANA)                  ESPEREI TANTO POR ESSE MOMENTO DE BRILHAR COM C++ $(FINAL)"
	@echo "$(ANA)                  BY: ANA SOBRINHO (ASOBRINH) $(FINAL)"
	@echo "$(NEON_PINK)            	  USE CADETE PARA TESTAR : $(ANA)./PhoneBook $(FINAL)"
	@echo "$(ANA)                  C++: É UMA LINGUAGEM DE PROGRAMAÇÃO PODEROSA E ORIENTADA A OBJETOS, $(FINAL)"
	@echo "$(ANA)                  AMPLAMENTE UTILIZADA PARA O DESENVOLVIMENTO DE SOFTWARE, $(FINAL)"
	@echo "$(ANA)                  JOGOS, APLICAÇÕES EMPRESARIAIS E SISTEMAS. $(FINAL)"

%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

