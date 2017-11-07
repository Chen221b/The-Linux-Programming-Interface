INC = ./INC/*
DEBUG = -g
TARGET = lseek copy seek_io

lseek copy seek_io: lseek.o copy.o error_functions.o seek_io.o
	gcc -o lseek lseek.o
	gcc -o copy copy.o error_functions.o
	gcc -o seek_io seek_io.o

seek_io.o: SRC/seek_io.c $(INC)
	gcc $(DEBUG) -c SRC/seek_io.c

lseek.o: SRC/lseek.c
	gcc $(DEBUG) -c SRC/lseek.c

copy.o: ./SRC/copy.c $(INC)
	gcc $(DEBUG) -c ./SRC/copy.c

error_functions.o : ./SRC/error_functions.c $(INC)
	gcc $(DEBUG) -c ./SRC/error_functions.c
	@echo $(INC)

clean :
	-rm *.o
