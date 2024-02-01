NAME		= Atack

CC			= c++
FLAGS		= -Wall -Wextra -Werror
RM			= rm -rf

OBJDIR = .objFiles

SRC			= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJ			= $(SRC:%.cpp=$(OBJDIR)/%.o)
HEADER		= HumanA.hpp HumanB.hpp Weapon.hpp

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@printf "Executable ready.\n"


$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "Object files removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "All clean.\n"


re: fclean all
