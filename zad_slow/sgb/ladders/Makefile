CFLAGS= -Wall -ansi

testowy: main.o 
	gcc -g -o testowy main.c -lgb

main.o: main.c gb_graph.h gb_words.h gb_dijk.h



clean:
	rm -f *.o testowy *~
 
