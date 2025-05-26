COMPILER = cc
FLAGS = -Wall -Werror -Wextra
NAME = push_swap.a
FILES = src/default/ft_get_list

FILES_BONUS = 

OBJS = $(FILES:.c=.o)
OBJS_BONUS = $(FILES_BONUS:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

bonus: fclean $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re