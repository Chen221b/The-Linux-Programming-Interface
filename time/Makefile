include ../Makefile.inc
INC = $(INC_PATH)*
OBJECT = $(INC_PATH)*.o
TARGET = process_time
TAR_OBJ = $(TARGET).o

$(TARGET): $(OBJECT)
	@echo $(OBJECT)
	gcc -o $(TARGET) $(TAR_OBJ) $(OBJECT)

# include ../INC/Makefile

$(TARGET_OBJ): $(INC)
