include ../Makefile.inc
INC = $(INC_PATH)*
OBJECT = $(INC_PATH)*.o
TARGET = idshow
TAR_OBJ = idshow.o

$(TARGET): $(OBJECT)
	@echo $(OBJECT)
	gcc -o $(TARGET) $(TAR_OBJ) $(OBJECT)

# include ../INC/Makefile

idshow.o: $(INC)
