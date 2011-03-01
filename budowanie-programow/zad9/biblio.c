#include<stdio.h>
#include<math.h>

float pierw(float x)
{
    return sqrt(x);
}

void hej()
{

    float pocz, konc, krok, w;
    printf("Podaj wartość początkową: ");
    scanf("%f", &pocz);
    printf("Podaj wartosc koncowa: ");
    scanf("%f", &konc);
    printf("Podaj wartosc kroku: ");
    scanf("%f", &krok);

    if (pocz > konc) {
	w = pocz;
	pocz = konc;
	konc = w;
    }
    if (krok < 0.0)
	krok *= -1.0;
    while (pocz <= konc) {
	if (pocz < 0.0) {
	    printf(" %.4f brak\n", pocz);
	} else {
	    printf(" %.4f %.4f\n", pocz, pierw(pocz));
	}

	pocz = pocz + krok;
    }
}
