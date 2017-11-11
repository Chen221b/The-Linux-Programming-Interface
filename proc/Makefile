INC = ../INC/*
necho display_env setjmp_var : necho.o display_env.o setjmp_vars.o
	gcc -o necho necho.o
	gcc -o display_env display_env.o
	# gcc -o setjmp_vars_with_optimize setjmp_vars_with_optimize.o
	gcc -o setjmp_vars setjmp_vars.o

necho.o: necho.c $(INC)
	gcc -c -g necho.c

display_env.o: display_env.c $(INC)
	gcc -c -g display_env.c

setjmp_vars.o: setjmp_vars.c $(INC)
	gcc -c -O setjmp_vars.c

# setjmp_vars_with_optimize.o: setjmp_vars.c $(INC)
# 	gcc -c  setjmp_vars.c