NAME := push_swap
HEADER := push_swap.h
LIBFT := libft/libft.a
SRCS := $(wildcard src/*.c)
OBJS := $(SRCS:.c=.o)
CFLAGS := -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@gcc -g -I. -Ilibft $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -s -C libft/

%.o: %.c $(HEADER)
	@cc -I. -Ilibft -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@make -s -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@make -s -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re