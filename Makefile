CC=gcc -c
LD=gcc
SRC=amplitude.c intensity.c main.c
OBJ=amplitude.o intensity.o main.o
wave:
	$(CC) $(SRC)
	$(LD) $(OBJ) -o wave.x -lm
	rm -rf *.o
clean:
	rm -rf *.o wave.x

