CFLAGS = -Wall

full: testowy test

testowy: glowny.o fun.o
	gcc -o testowy glowny.o fun.o

glowny.o: fun.c def.h

clean:
	rm *~ *.out testowy

test:
	./testowy < test > wynik.out
	rm *.o test
