CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror -std=c99
CPPFLAGS = -Ilibft -include libft/libft.h
NAME = libft.a
SOURCES = $(wildcard libft/ft_*.c)
OBJECTS = $(SOURCES:.c=.o)
TEST_SOURCES = $(wildcard tests/test_*.c)
TEST_BINS = $(TEST_SOURCES:.c=)

.PHONY: all test clean fclean re
all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) rcs $@ $^

libft/%.o: libft/%.c libft/libft.h
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

tests/test_%: tests/test_%.c $(NAME) libft/libft.h
	$(CC) $(CPPFLAGS) $(CFLAGS) $< $(NAME) -o $@

test: $(TEST_BINS)
	@set -e; for test in $(TEST_BINS); do ./$$test; done
	@echo "All tests passed."

clean:
	rm -f $(OBJECTS) $(TEST_BINS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
