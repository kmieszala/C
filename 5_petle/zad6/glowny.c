#include <stdio.h>
#include "def.h"

int main()
{
    float tab[6];
    int i;

    for (i = 0; i < 6; i++) {
	tab[i] = pr("Podaj liczbe : ");
    }

    wypmin(tab);
    printf("\n");
    wypmax(tab);
    printf("\n");

    return 0;
}
