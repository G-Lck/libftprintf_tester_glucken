# Nom de l'exécutable
NAME = tests

# Fichiers sources
SRCS = main.c \
	compare_int.c \
	test_char.c \
	test_dec.c \
	test_flags.c \
	test_int.c \
	test_lower_hexa.c \
	test_percent.c \
	test_pointer.c \
	test_string.c \
	test_u_dec.c \
	test_upper_hexa.c

# Fichiers objets
OBJS = $(SRCS:.c=.o)

# Path vers ta libftprintf
FT_PRINTF_DIR = /mnt/c/Users/41779/Desktop/42/libftprintf
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

# Compilateur et flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(FT_PRINTF_DIR)

# Règle principale
all: $(NAME)

# Compilation de l'exécutable
# 👇 Ici, on lie directement avec la lib (pas besoin de -l ni -L)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(FT_PRINTF) -o $(NAME)

# Compilation des .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des objets
clean:
	rm -f $(OBJS)

# Nettoyage complet
fclean: clean
	rm -f $(NAME)

# Rebuild complet
re: fclean all

.PHONY: all clean fclean re
