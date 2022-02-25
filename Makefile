SRCS = srcs/printf.c \
	   srcs/format.c \
	   srcs/charstr.c \
	   srcs/integer.c \

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ./includes_h/	   
LIBFT = ./srcs/libft/
LIBFT_A = ./srcs/libft/libft.a
RM = rm -f

.PHONY: all clean fclean re

%.o: %.c
	gcc $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INCLUDES)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp $(LIBFT_A) $(NAME)
	gcc -c $(CFLAGS) -I$(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS)
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

re: fclean all
