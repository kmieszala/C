CFLAGS = -Wall

full : testowy test

testowy : biblio.o glowny.o
	gcc -o testowy -lm biblio.o glowny.o

glowny.o : glowny.c def.h

clean :
	rm -f *.o testowy *~
test:
	echo "1 3 1" > test1.in
	echo "1 10 3" > test2.in
	./testowy < test1.in > wynik1.out
	./testowy < test2.in > wynik2.out
	rm testowy
	rm *.in
	rm *.o
	rm *~
