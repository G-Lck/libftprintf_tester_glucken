NAME = tests

SRCS = main.c

OBJS = $(SRCS:.c=.o)

# Path to ft_printf to change
FT_PRINTF_DIR = /home/glucken/Desktop/42/printf_wait
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(FT_PRINTF_DIR)

all: $(FT_PRINTF) $(NAME)

$(NAME): $(OBJS) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(OBJS) -L$(FT_PRINTF_DIR) -libftprintf -o $(NAME)

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re