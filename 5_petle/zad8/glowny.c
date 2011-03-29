#include <stdio.h>
#include "def.h"

int main()
{
    drawPicture(1, 0, 1, 0, 4);
    printf("\n");		// Te spacje sa dodatkowe, wiec nie mogly wejsc w sklad funckji, dodalem je by ladniej wygladaly
    drawPicture(4, 0, -1, 0, 4);
    printf("\n");
    drawPicture(4, 0, -1, 1, 4);
    printf("\n");
    drawPicture(1, 3, 1, -1, 4);
    return 0;
}
