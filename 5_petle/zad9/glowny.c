#include<stdio.h>
#include<string.h>
#include "def.h"
int main()
{
    char z[100];
    czytaj();
    do {

	printf("\n d - drukuj\n");
	printf("o - oblicz\n");



	fgets(z, 100, stdin);
	switch (z[0]) {
	case 'd':
	    drukuj();
	    break;
	case 'o':
	    oblicz();
	    break;
	}
    } while (z[0] != 'k');
    return (0);
}
