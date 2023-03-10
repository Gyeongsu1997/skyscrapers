CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = skyscrapers
SRCS = main.c backtrack.c compare.c
OBJS = $(SRCS:.c=.o)

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(TARGET)

re : fclean all

.PHONY : all clean fclean re