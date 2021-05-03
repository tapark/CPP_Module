SRCS =	./megaphone.cpp \

NAME = megaphone

OBJS = $(SRCS:.cpp=.o)
INCS = .
RM = rm -f
CC = clang++
CFLAGS = -Wall -Wextra -Werror
VER = -std=c++98
MEM_FLAGS = -g3 -fsanitize=address

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I $(INCS)

memory : $(OBJS)
		$(CC) $(CFLAGS) $(MEM_FLAGS) -o $(NAME) $(OBJS) -I $(INCS)

all : $(NAME)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all