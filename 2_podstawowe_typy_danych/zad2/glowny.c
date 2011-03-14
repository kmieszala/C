/*Napisz program, który prosi o podanie kodu ASCII, a następnie wypisuje znak odpowiadający temu kodowi.
 *
 * Przykładowa sesja z tym programem może wyglądać tak:
 *
 * Podaj kod ASCII: 65
 * A
 * Podaj kod ASCII: 0x41
 * A
 * Podaj kod ASCII: 0101
 * A
 * Podaj kod ASCII: 0
 * znak niedrukowaln
 */
#include <stdio.h>
#include "def.h"

int main(){
	int a;
	printf("Podaj kod ASCII : ");
	scanf("%d", &a);

	kod(a);
	return 0;
}
	
