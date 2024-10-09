Comp = gcc

CFLAGS = -Wall -Wextra -Werror -I.

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

BSRCS = $(wildcard Bonus/*.c)

BOBJS = $(BSRCS:.c=.o)

Name = libft.a

all: $(Name)

$(Name) : $(OBJS)
			ar rcs $(Name) $(OBJS)

bonus : $(OBJS) $(BOBJS)
			ar rcs $(Name) $(OBJS) $(BOBJS)

clean:
		rm -f $(OBJS) $(BOBJS)

fclean: clean
			rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re bonus