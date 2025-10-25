
fibonacci_program: main.o fibonacci.o printFib.o
	cc -o fibonacci_program main.o fibonacci.o printFib.o

main.o: main.c fibonacci.h printFib.h
	cc -c main.c

fibonacci.o: fibonacci.c fibonacci.h
	cc -c fibonacci.c

printFib.o: printFib.c fibonacci.h printFib.h
	cc -c printFib.c

clean:
	rm -f *.o fibonacci_program

