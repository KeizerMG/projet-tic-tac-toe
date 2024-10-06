# Nom de l'exécutable
NAME = tic-tac-toe

# Fichiers sources (seuls les .c)
SRCS = main.c tic-tac-toe.c

# Options de compilation
CC = gcc
CFLAGS = -Wall -Wextra

# Règle principale pour générer l'exécutable
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(SRCS)
    

# Nettoyage : suppression de l'exécutable
fclean:
   

# Recompile tout
re: fclean all
