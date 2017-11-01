OBJ = copy.o error_functions.o
edit : $(OBJ)
	gcc -o edit $(OBJ)

copy.o : copy.c tlpi_hdr.h error_functions.h get_num.h
	gcc -c copy.c

error_functions.o : error_functions.c error_functions.h ename.c.inc tlpi_hdr.h get_num.h
	gcc -c error_functions.c

clean :
	rm *.o
