
CC = cc
CFLAGS = -Wextra -Werror -Wall
TARGETS = push_swap

all: $(TARGETS)

push_swap: push_swap.c libft/libft.a
	$(CC) $(CFLAGS) -o $@ $^ -Llibft -lft

libft/libft.a:
	make -C libft/

clean:
	make -C libft/ clean

fclean: clean
	rm -rf $(TARGETS)
	make -C libft/ fclean

re: fclean all