
CC = cc
CFLAGS = -g3 -Wextra -Werror -Wall -I.
C_FILES = push_swap.c \
		check_input_params.c \
		create_el_stack_a.c \
		init_stack.c \
		print_stack.c \
		swap_a.c \
		swap_b.c \
		swap_swap.c


HEADERS = push_swap.h
TARGETS = push_swap

all: $(TARGETS)

push_swap: $(C_FILES) libft/libft.a
	@$(CC) $(CFLAGS) $^ -Llibft -lft -o $@

libft/libft.a:
	@make -C libft/

clean:
	@make -C libft/ clean

fclean: clean
	@rm -rf $(TARGETS)
	@make -C libft/ fclean

re: fclean all