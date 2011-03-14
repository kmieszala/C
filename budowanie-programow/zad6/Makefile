CFLAGS = -Wall

full : testowy test

testowy : biblio.o glowny.o
	gcc -o testowy biblio.o glowny.o
 
glowny.o : glowny.c def.h

clean :
	rm -f *.o testowy *~ 
test:
	echo "5" > test1.in
	echo "0" > test2.in
	echo "-5" > test3.in
	./testowy < test1.in > wynik1.out
	./testowy < test2.in > wynik2.out
	./testowy < test3.in > wynik3.out
	rm testowy
	rm *.in
	rm *.o
	rm *~
