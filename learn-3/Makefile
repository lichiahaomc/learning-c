CFLAGS = -Wall -Wextra -Werror -ggdb
LDLIBS =

main: main.c input.txt FORCE
	cc $(CFLAGS) -o main main.c $(LDLIBS) && ./main < input.txt

FORCE:
