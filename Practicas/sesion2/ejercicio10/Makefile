estados: 10Estados.o 10PrincipalEstados.o
	gcc -o estados 10Estados.o 10PrincipalEstados.o

10Estados.o: 10Estados.c 10Estados.h
	gcc -g -c 10Estados.c

10PrincipalEstado.o: 10PrincipalEstados.c
	gcc -g -c 10PrincipalEstados.c
clean:
	rm - estados *.o
