OBJ = copy.o error_functions.o
INC = ./INC/*
COPY : $(OBJ)
	gcc -o COPY $(OBJ)

copy.o: ./SRC/copy.c $(INC)
	gcc -c ./SRC/copy.c

error_functions.o : ./SRC/error_functions.c $(INC)
	gcc -c ./SRC/error_functions.c
	@echo $(INC)

clean :
	-rm *.o
