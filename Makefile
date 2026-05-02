CC     = gcc
CFLAGS = -Wall -Wextra -std=c99

all: calculadora.exe

calculadora.exe: main.o operaciones.o
	$(CC) $(CFLAGS) main.o operaciones.o -o calculadora.exe

main.o: main.c operaciones.h
	$(CC) $(CFLAGS) -c main.c

operaciones.o: operaciones.c operaciones.h
	$(CC) $(CFLAGS) -c operaciones.c

clean:
	rm -f *.o calculadora.exe

test:
	@bash test_local.sh
