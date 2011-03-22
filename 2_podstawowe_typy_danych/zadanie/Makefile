CFLAGS = -Wall

full : testowy test

testowy: glowny.o main.o
	gcc -o testowy glowny.o main.o

main.o : glowny.c def.h

clean:
	rm -f *.o testowy *~
test:	
	echo "2 4" > test1.in
	echo "3 4" > test2.in
	echo "5 10" > test3.in
	./testowy < test1.in >wynik1.out
	./testowy <test2.in >wynik2.out
	./testowy <test3.in >wynik3.out	
	rm *.in
	rm *.o
	rm testowy
