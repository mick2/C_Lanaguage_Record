main: singleFW.o main.o
	gcc -o main singleFW.c main.c
singleFW.o: singleFW.c
	gcc -c -o singleFW.o singleFW.c
main.o: main.c
	gcc -c -o main.o main.c
clean:
	rm *.o main
