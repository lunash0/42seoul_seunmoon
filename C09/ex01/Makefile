CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/ft/putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS = ./srcs/ft_putchar.o ./srcs/ft_swap.o ./srcs/ft_putstr.o ./srcs/ft_strlen.o ./srcs/ft_strcmp.o

NAME = libft.a

INCLUDES = ./includes

.PHONY : all clean fclean re

all :$(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $^ -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
