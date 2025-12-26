SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp  PresidentialPardonForm.cpp RobotomyRequestForm.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror
NAME = Bureaucrat

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all