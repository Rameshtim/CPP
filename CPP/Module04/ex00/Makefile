NAME = animal

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf

OBJDIR = .obj

FILES = main Animal Dog Cat WrongAnimal WrongCat

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/, $(FILES:=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(OBJDIR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclen: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re