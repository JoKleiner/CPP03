
NAME = a.out
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

OBJ_DIR		:= obj_dir

SRCS 		:= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS 		:= $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJS)
	@printf "Create $(NAME)... "; \
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@printf "\033[0;32mcreated\033[0m\n"

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@if [ -d $(OBJ_DIR) ]; then \
		printf "Clean $(NAME)... "; \
		rm -rf $(OBJ_DIR); \
		printf "\033[0;31mcleaned.\033[0m\n"; \
	fi

fclean: clean
	@if [ -f "$(NAME)" ]; then \
		printf "Remove $(NAME)... "; \
		rm -f $(NAME); \
		printf "\033[0;31mremoved.\033[0m\n"; \
	fi

re:	fclean all

.PHONY: all clean fclean re
