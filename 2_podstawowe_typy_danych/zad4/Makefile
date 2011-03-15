CFLAGS = -Wall

full : testowy test

testowy: glowny.o kod.o
	gcc -o testowy glowny.o kod.o

main.o : glowny.c def.h

clean:
	rm -f *.o testowy *~
test:
	echo "24-02-1990" > test1.in
	echo "24 02 1990" > test2.in
	echo "14-03-2011" > test3.in
	./testowy < test1.in >wynik1.out
	./testowy <test2.in >wynik2.out
	./testowy <test3.in >wynik3.out
	rm *.in
	rm *.o
	rm testowy
