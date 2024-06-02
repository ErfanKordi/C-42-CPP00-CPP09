NAME        = Form

CC          = c++
FLAGS       = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf

OBJDIR      = .objFiles

SRC         = main.cpp Bureaucrat.cpp Form.cpp
HEADER      = Bureaucrat.hpp Form.hpp

OBJ         = $(SRC:%.cpp=$(OBJDIR)/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@printf "Executable ready.\n"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR)
	@printf "Object files removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "Executable and object files removed.\n"

re: fclean all
