OBJ=main.o
main:${OBJ}
	gcc ${OBJ} -o main

main.o:main.c
	gcc -c main.c -o main.o

.PHONY:
	clean
clean:
	-rm ${OBJ} main	
