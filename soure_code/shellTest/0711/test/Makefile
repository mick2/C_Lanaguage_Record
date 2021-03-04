OBJ = main.o mytool1.o mytool2.o mytool3.o

main: ${OBJ}
	gcc ${OBJ} -o main

main.o: mytool1.h mytool2.h mytool3.o
mytool1.o: mytool1.h
mytool2.o: mytool2.h
mytool3.o: mytool3.h

.PHONY:
	clean
clean:
	-rm ${OBJ} main
