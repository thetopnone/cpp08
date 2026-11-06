CXX = c++
CXX_FLAGS = -g -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
OBJS_DIR = objs
OBJS = $(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SRCS))
NAME = easyfind

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXX_FLAGS) $^ -o $@

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
