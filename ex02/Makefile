NAME = ptr

CC = c++

SRC_DIR := .
OBJ_DIR = obj



vpath %.cpp $(SRC_DIR)
vpath %.hpp $(INC_DIR)


FILES =	main.cpp

SRC = $(addprefix $(SRC_DIR)/, $(FILES))

OBJ =	$(addprefix $(OBJ_DIR)/, $(FILES:%.cpp=%.o))



FLAGS = -Wall -Wextra -Werror

all: $(NAME)



$(NAME): $(OBJ)
	@$(CC) $^ -o $@

$(OBJ_DIR)/%.o:	%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@ 

clean:
	@rm -rf ptr

fclean: clean

re: fclean all

.PHONY: clean fclean all re