include ../Makefile.inc

t_fork envargs t_execve t_system t_clone: t_fork.o $(INC_PATH)*.o envargs.o t_execve.o t_system.o t_clone.o
	gcc -o t_fork t_fork.o $(INC_PATH)*.o
	gcc -o envargs envargs.o
	gcc -o t_execve t_execve.o
	gcc -o t_system t_system.o
	gcc -o t_clone t_clone.o

t_fork.o: $(INC_PATH)*.h

envargs.o:

t_execve.o:

t_system.o:

t_clone.o: