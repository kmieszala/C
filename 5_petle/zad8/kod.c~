#include <stdio.h>
// Niestety ubogie C nie posiada zmiennych typu boolowskich i jestem zmuszony uzyc typu int ( ojak ja nad tym ubolewam :< )

/*
// startingDots - od ilu kropek zaczynasz
// startingSpace - od ilu spacji zaczynasz
// addSpace - ( -1 , 0 , 1 ) czy dodajesz spacje w kolejnej lini czy nie czy odejmujesz
// addDot - ( -1 , 0 , 1 ) czy dodajesz kropke w kolejnej lini czy nie czy odejmujesz
// lines - ile lini ma obrazek
*/
void drawPicture(int startingDots, int startingSpace, int addDot,
		 int addSpaces, int lines)
{
    int i, j;

    int currentDots = startingDots;
    int currentSpaces = startingSpace;
    for (i = 0; i < lines; i++) {
	for (j = 0; j < currentSpaces; j++) {
	    putchar(' ');
	}

	for (j = 0; j < currentDots; j++) {
	    putchar('*');
	}

// Each Loop Changes

	switch (addSpaces) {
	case -1:
	    currentSpaces--;
	    break;
	case 0:
	    break;
	case 1:
	    currentSpaces++;
	    break;
	}

	switch (addDot) {
	case -1:
	    currentDots--;
	    break;
	case 0:
	    break;
	case 1:
	    currentDots++;
	    break;
	}
	printf("\n");
    }


}
