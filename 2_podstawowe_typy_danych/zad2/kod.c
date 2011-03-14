#include <stdio.h>

char kod(a)
{
    if (a == 0) {
	printf("znak niedrukowalny\n");
	return 0;
    }
    if (a > 127 || a < 0) {
	printf("Nie ma takiej liczby w tabeli ASCII\n");
	return 0;
    }
    char wynik = (char) a;
    printf("%c\n", wynik);
    return 0;


}
