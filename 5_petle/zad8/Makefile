CFLAGS = -Wall

full: testowy test

testowy: glowny.o kod.o
	gcc -o testowy glowny.o kod.o

glowny.o: kod.c def.h

clean:
	rm *~ *.out testowy

test: 
	./testowy > wynik.out
	rm *.o
