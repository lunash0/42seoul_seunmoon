CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address
SRCS = calculate.c ft_atoi.c ft_putnbr.c main.c
NAME = do-op
OBJS = $(SRCS:.c=.o)

.PHONY : clean fclean re

all :$(NAME)
$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)
%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $^
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
