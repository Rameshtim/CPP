NAME = zombie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

OBJDIR = objFiles

FILES = main Zombie newZombie randomChump

SRC = $(FILES:=.cpp)
OBJ = $(addprefix $(OBJDIR)/, $(FILES:=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

flcean: clean
	$(RM) $(NAME)

re: flcean all

.PHONY: all clean flcean re