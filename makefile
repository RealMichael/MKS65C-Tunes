all: main.o linkedList.o library.o
	gcc -o list main.o linkedList.o library.o

debug: main.c linkedList.c library.c
	gcc -g list main.c linkedList.c library.c
    
main.o: main.c linkedList.h library.h
	gcc -c main.c

linkedList.o: linkedList.c linkedList.h
	gcc -c linkedList.c
    
library.o: library.c library.h
	gcc -c library.c

run:
	./list

clean:
	rm *.o
