NAME	=   Moar_brainz!

CC		=	c++
WFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98
FLAGS	=	$(WFLAGS) $(STDFLAG)

SRCS	=	main.cpp Zombie.cpp zombieHorde.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "Executable $(NAME) created."

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "Object files removed."

fclean: clean
	rm -f $(NAME)
	@echo "Executable removed."

re: fclean all

$(OBJS): Zombie.hpp
.PHONY: all clean fclean re