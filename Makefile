CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap.a
FILES = main.c \
		src/default/ft_get_list \

OBJS = $(FILES:.c=.o)
OBJS_BONUS = $(FILES_BONUS:.c=.o)

AR = ar rcs

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) all

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

#bonus: fclean $(OBJS_BONUS)
#	$(AR) $(NAME) $(OBJS_BONUS)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:	clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re