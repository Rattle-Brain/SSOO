# 

# Este fichero debe llamarse exactamente asi: "Makefile" 

# 

primos: Main.o CheckPrime.o  
	gcc -o primos Main.o CheckPrime.o  

   

Main.o: Main.c Defs.h   
	gcc -g -c Main.c  

   

CheckPrime.o: CheckPrime.c Externs.h 
	gcc -g -c CheckPrime.c  

   

clean:  
	rm -f primos core *.o *~  
