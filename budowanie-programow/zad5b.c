/* Program ten dla dwóch liczb wczytanych z klawiatury
 * wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
    int licz1, licz2;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &licz1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &licz2);
    if (licz1 > licz2) {
	printf("Pierwsza z podanych liczb: %i jest większa od drugiej liczby %i.\n", licz1, licz2);
    } else if (licz1 < licz2) {
	printf("Druga z podanych liczb: %i jest większa od pierwszej liczby %i.\n", licz2, licz1);
    } else {
	printf("Podane liczby sa rowne:\n%i=%i.\n", licz1, licz2);
    }

    return 0;
}
