NAME = FileProcessor

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = FileProcessor.cpp FileProcessor.hpp main.cpp

RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m

all: $(NAME)

$(NAME): $(SRC)
	@echo "$(YELLOW)Doing $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)$(NAME) Done!$(RESET)"

clean:
	@echo "$(RED)Cleaning $(NAME)...$(RESET)"
	@rm -f $(NAME)

fclean: clean

re: fclean all


.PHONY: all clean fclean re