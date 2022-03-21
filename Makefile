CC = g++
CFLAGS = -Wall
OBJ = color_console_example.o

color_console_example.out: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
