CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
FILES = main.c \
		src/default/ft_add_stack_back.c \
		src/default/ft_get_first_node.c \
		src/default/ft_get_last_node.c \
		src/default/ft_get_stack.c \
		src/default/ft_new_stack.c \
		src/moves/ft_rotate.c \
		src/sort/ft_inverse_sort.c \
		src/sort/ft_select_algorithm.c \
		src/sort/ft_sort_three_elements.c \

OBJS = $(FILES:.c=.o)
OBJS_BONUS = $(FILES_BONUS:.c=.o)

AR = ar rcs

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
#	cp $(LIBFT) .
#	mv libft.a $(NAME)
#	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) all

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:	clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re