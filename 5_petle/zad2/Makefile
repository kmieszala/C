CFLAGS = -Wall 

full: testowy test 

testowy: glowny.o kod.o 
	gcc - o testowy glowny.o kod.o 

glowny.o: kod.c def.h 

clean:
	rm -f *.o testowy *~

test:
	./testowy > wynik
