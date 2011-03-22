#include <stdio.h>
#include "def.h"

int main()
{
float a, b, wynik;

a = pobierz_dane("A : ");
b = pobierz_dane("B : ");
wynik = oblicz_wynik(a, b);
wypisz_wynik(wynik, "X : ");
printf("\n");

return 0;
}
