#include<stdio.h>

int min(int x, int y, int z)
{
    int mini = 1000;
    if (x < mini) {
	mini = x;
	if (y < mini) {
	    mini = y;
	    if (z < mini) {
		mini = z;
	    }
	} else if (z < mini) {
	    mini = z;
	}
    }
    return mini;
}

int max(int x, int y, int z)
{
    int max = -1000;
    if (x > max) {
	max = x;
	if (y > max) {
	    max = y;
	    if (z > max) {
		max = z;
	    }
	} else if (z > max) {
	    max = z;
	}
    }
    return max;
}

void hej()
{
    int x, y, z, suma, iloczyn;
    printf("Wprowadź trzy liczby całkowite: ");
    scanf("%i %i %i", &x, &y, &z);
    printf("\n");
    suma = x + y + z;
    printf("Suma wynosi: %i\n", suma);
    iloczyn = x * y * z;
    printf("Iloczyn wynosi: %i\n", iloczyn);
    printf("Najmniejsza liczba to: %i\n", min(x, y, z));
    printf("Największa liczba to: %i\n", max(x, y, z));
}
