#include<stdio.h>
void hej()
{
    int x, kwadrat;
    printf("Podaj liczbe:");
    scanf("%i", &x);
    if (0 >= x) {
	printf("Podana liczba jest zla.\n");
    } else {
	kwadrat = x * x;
	printf("Pierwiastek kwadratowy z podanej liczby wynosi: %i.\n",
	       kwadrat);
    }
}
