CC = gcc
CFLAGS = -Wall -Wextra -g -O0

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

program: $(OBJ)
	$(CC) $(OBJ) -o program

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) program