edit : copy.o
	gcc -o edit copy.o

copy.o : copy.c lib/tlpi_hdr.h
	gcc -c copy.c
