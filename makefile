prog:ob.o mainob.o
	gcc ob.o mainob.o -o prog

mainob.o:mainob.c
	gcc -c mainob.c
ob.o:ob.c
	gcc -c ob.c
