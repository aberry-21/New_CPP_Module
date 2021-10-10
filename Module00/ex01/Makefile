NAME = phonebook

STD = -std=c++98

SOURCE_FILES =	Contact.cpp\
				PhoneBook.cpp\
				main.cpp

SRC = $(addprefix src/, $(SOURCE_FILES))

INC = -I./

OBJS = $(SRC:.cpp=.o)

CXX = clang++
CXXFLAGS = $(STD) -Wall -Wextra -Werror $(INC)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all