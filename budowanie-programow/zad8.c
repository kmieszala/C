#include<stdio.h>

int min (int x, int y, int z) 
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
int main()
{
    int x, y, z, suma, iloczyn, max = -1000;
    printf("Wprowadź trzy liczby całkowite: ");
    scanf("%i %i %i", &x, &y, &z);
    suma = x + y + z;
    printf("Suma wynosi: %i\n", suma);
    iloczyn = x * y * z;
    printf("Iloczyn wynosi: %i\n", iloczyn);
    printf("Najmniejsza liczba to: %i\n", min (x, y, z));
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
	printf("Największa liczba to: %i\n", max);
    }
    return 0;
}
