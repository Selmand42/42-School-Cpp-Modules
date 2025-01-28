NAME = zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

RM = rm -rf

SRCS = main.cpp randomChump.cpp Zombie.cpp newZombie.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

re: clean all

.PHONY:all re clean
