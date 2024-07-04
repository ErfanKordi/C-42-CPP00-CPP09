NAME        = RPN
CC          = c++
FLAGS       = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf
OBJDIR      = .objFiles
SRC         = RPN.cpp main.cpp
HEADER      =
OBJ         = $(SRC:%.cpp=$(OBJDIR)/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) | $(OBJDIR)
	@$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER) | $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@$(RM) $(OBJDIR)
	@printf "Object files removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "Executable removed.\n"

re: fclean all
