include ../Makefile.inc
INC = ../INC/*
OBJECT = $(INC_PATH)error_functions.o $(INC_PATH)get_num.o
TARGET = free_and_sbrk
TAR_OBJ = free_and_sbrk.o

$(TARGET): $(OBJECT)
	@echo $(OBJECT)
	gcc -o $(TARGET) $(TAR_OBJ) $(OBJECT)

# include ../INC/Makefile

$(TAR_OBJ): $(INC)
