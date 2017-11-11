INC = ../INC/*
OBJECT = free_and_sbrk.o error_functions.o get_num.o 

free_and_sbrk: $(OBJECT)
	gcc -o free_and_sbrk free_and_sbrk.o error_functions.o get_num.o 

include ../INC/Makefile

free_and_sbrk.o: $(INC)
