#include <stdio.h>
#include <math.h>

void hej(float deg)
{
    float rad;
    printf("Podaj kat w stopniach : ");
    scanf("%f", &deg);
    rad = 2 * M_PI * deg / 360;
    printf("%f deg = %f rad\n", deg, rad);
}
