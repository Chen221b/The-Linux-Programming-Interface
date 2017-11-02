OBJ = copy.o error_functions.o
INC = ./INC/*
DEBUG = -g
copy : $(OBJ)
	gcc -o copy $(OBJ)

copy.o: ./SRC/copy.c $(INC)
	gcc $(DEBUG) -c ./SRC/copy.c

error_functions.o : ./SRC/error_functions.c $(INC)
	gcc $(DEBUG) -c ./SRC/error_functions.c
	@echo $(INC)

clean :
	-rm *.o
