NAME		= rawbits

CC			= c++
<<<<<<< HEAD
FLAGS		= -Wall -Wextra -Werror -std=c++98
=======
FLAGS		= -Wall -Wextra -Werror
>>>>>>> b7c79eb04997d75f36a5b16a84d5f698f8b32109
RM			= rm -rf

OBJDIR = .objFiles

<<<<<<< HEAD
SRC			= main.cpp Fixed.cpp
OBJ			= $(SRC:%.cpp=$(OBJDIR)/%.o)
HEADER		= Fixed.hpp
=======
SRC			= main.cpp fixed.cpp
OBJ			= $(SRC:%.cpp=$(OBJDIR)/%.o)
HEADER		= fixed.hpp
>>>>>>> b7c79eb04997d75f36a5b16a84d5f698f8b32109

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
