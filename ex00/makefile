NAME = Zombie

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)Linking $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) Done!$(RESET)"

clean:
	@echo "$(RED)Cleaning objects...$(RESET)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Cleaning $(NAME)...$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re