CFLAGS = -Wall

full : testowy test

testowy : glowny2.o biblio2.o
       gcc -o testowy glowny2.o biblio2.o

glowny2.o : glowny2.c def.h

clean: 
	rm -f *.o testowy *~

test :
	./testowy < test > wynik1


