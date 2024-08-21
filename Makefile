FT_PRINTF := ../ft_printf

CC := cc
CFLAGS := -I $(FT_PRINTF)/include

NAME := test.out
SOURCES := src/test.c
OBJECTS := $(SOURCES:%.c=%.o)

.PHONY: all
all: $(NAME)

$(NAME): $(SOURCES) $(FT_PRINTF)/libftprintf.a
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	$(RM) $(OBJECTS)

.PHONY: fclean
fclean:
	$(RM) $(NAME)

.PHONY: re
re: fclean all
