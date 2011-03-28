#include<stdio.h>

void gwiazdki()
{
    int a = 0, r, b = 0;
    while (b < 8) {
	r = b % 2;
	if (r == 0) {
	    while (a < 8) {
		printf("* ");
		a = a + 1;
	    }
	} else {
	    while (a < 8) {
		printf(" *");
		a = a + 1;
	    }
	}
	printf("\n");
	a = 0;
	b = b + 1;
    }
}
