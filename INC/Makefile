OBJECT = error_functions.o get_num.o
HEADFILE = error_functions.h get_num.h tlpi_hdr.h ename.c.inc

include ../Makefile.inc

error_functions.o: $(INC_PATH)error_functions.h
	gcc -c $(INC_PATH)error_functions.c

get_num.o: $(INC_PATH)*
	gcc -c $(INC_PATH)get_num.c