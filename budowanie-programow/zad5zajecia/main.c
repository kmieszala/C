#include<math.h>
#include<stdio.h>

#include "helpers.h"

int main()
{
	double x, p;
	x = pobierz_rzeczywistą();
	p = sqrt(x);
	printf("Pierwiastek z %f = %f\n", x, p);

	return 0;
}
