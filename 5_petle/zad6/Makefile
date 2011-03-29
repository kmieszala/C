CFLAGS = -Wall

full: testowy test

testowy: glowny.o kod.o
	gcc -o testowy glowny.o kod.o

glowny.o: kod.c def.h

clean:
	rm *~ *.out

test:
	echo "6 5 4 18 23 0" > test1.in
	echo "0 1 2 3 4 5" > test2.in
	echo "17 83 29 34 5 3" > test3.in
	./testowy < test1.in >wynik1.out
	./testowy <test2.in >wynik2.out
	./testowy <test3.in >wynik3.out
	rm *.o *.in testowy
