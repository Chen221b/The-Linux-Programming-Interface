OBJ = copy.o error_functions.o
INC = ./INC/*
DEBUG = -g
TARGET = lseek copy

lseek copy: lseek.o copy.o error_functions.o
	gcc -o lseek lseek.o
	gcc -o copy copy.o error_functions.o

lseek.o: SRC/lseek.c
	gcc $(DEBUG) -c SRC/lseek.c

copy.o: ./SRC/copy.c $(INC)
	gcc $(DEBUG) -c ./SRC/copy.c

error_functions.o : ./SRC/error_functions.c $(INC)
	gcc $(DEBUG) -c ./SRC/error_functions.c
	@echo $(INC)

clean :
	-rm *.o
