CC = c++ -Wall -Wextra -Werror -std=c++17 -g

NAME = phonebook

SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJDIR = obj
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

GREEN=\033[0;32m
RED=\033[0;31m
NC=\033[0m

all: $(NAME)
	@echo "$(GREEN)Build successful$(NC)"

$(NAME): $(OBJS)
	@echo "$(GREEN)Linking object files$(NC)"
	$(CC) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@echo "$(GREEN)Compiling $<$(NC)"
	$(CC) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@echo "$(RED)Cleaning up$(NC)"
	rm -rf $(OBJDIR)
	rm -rf *.dSYM

fclean: clean
	@echo "$(RED)Force cleaning$(NC)"
	rm -f $(NAME)

re: fclean all
	@echo "$(GREEN)Rebuild complete$(NC)"

.PHONY: all clean fclean re