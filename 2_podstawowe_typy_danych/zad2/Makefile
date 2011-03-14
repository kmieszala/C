CFLAGS = -Wall

full : testowy test

testowy: glowny.o kod.o
	gcc -o testowy glowny.o kod.o

main.o : glowny.c def.h

clean:
	rm -f *.o testowy *~
test:
	echo "65" > test1.in
	echo "0101" > test2.in
	./testowy < test1.in >wynik1.out
	./testowy <test2.in >wynik2.out
	rm *.in
	rm *.o
	rm testowy
