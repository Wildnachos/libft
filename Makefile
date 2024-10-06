NAME = libft.a

files = $(wildcard ft_*.c)

Comp = gcc

flags = -Wall -Wextra -Werror

Ofiles = $(files:.c=.o)

all : $(NAME)

$(NAME):
	$(Comp) $(flags) -c $(files) -I./
	ar -rc $(NAME) $(Ofiles)

clean:
	rm -f $(Ofiles)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re