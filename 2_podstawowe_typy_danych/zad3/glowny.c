#include <stdio.h>
#include "def.h"

int main() {
	int lata;
	printf("Podaj Twój wiek w latach. \n");
	scanf("%d", &lata);
	printf("Żyjesz %d sekund. \n", kod(lata));
	return 0;
}
