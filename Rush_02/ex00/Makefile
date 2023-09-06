NAME = rush-02

CFLAGS = -Wall -Wextra -Werror
SRCS = main.c read_dict.c rush.c str.c dict_to_str.c
all:	$(NAME)

$(NAME): $(SRCS)
		cc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

clean:
	rm $(NAME)
