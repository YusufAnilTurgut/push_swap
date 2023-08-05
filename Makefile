NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
SRCS_1 = $(wildcard src/*.c)
SRCS_2 = ./src/main/push_swap.c
R = "\033[31m"
B = "\033[34m"


OBJS_1= $(SRCS_1:.c=.o)
OBJS_2= $(SRCS_2:.c=.o)

LIBFT = ./libft/libft.a

all: ${NAME}

$(LIBFT):
	@make bonus -C ./libft


$(NAME):$(LIBFT) $(OBJS_1) $(OBJS_2)
	$(CC) $(CFLAGS) $(AFLAGS) $(OBJS_1) $(OBJS_2) $(LIBFT) -o $(NAME)
	@echo "Creating Game"

%.o: %.c
	@echo $(R)Complining [$<]
	@${CC} -c $^ -o $@ -Wall -Werror -Wextra -g

clean:
	@rm -rf ${OBJS_1} ${OBJS_2}
	@echo $(R)Removed [$(OBJS)]$(B)
	@make clean -C libft/

fclean: clean
	@rm -rf ${NAME}
	@echo $(R)Removed [$(NAME)]$(B)
	@make fclean -C libft/

re: fclean all

.PHONY: fclean re all clean bonus