#include<stdio.h>
#include<math.h>

float pierw(float x)
{
    return sqrt(x);
}

int main()
{
    double pocz, konc, krok, w;
    printf("Podaj wartość początkową: ");
    scanf("%lf", &pocz);
    printf("Podaj wartosc koncowa: ");
    scanf("%lf", &konc);
    printf("Podaj wartosc kroku: ");
    scanf("%lf", &krok);

    if (pocz > konc) {
	w = pocz;
	pocz = konc;
	konc = w;
    }
    if (krok < 0.0)
	krok *= -1.0;
    while (pocz <= konc) {
	if (pocz < 0.0) {
	    printf(" %.4lf brak\n", pocz);
	} else {
	    printf(" %.4lf %.4lf\n", pocz, pierw(pocz));
	}

	pocz =pocz+krok;
    }

    return 0;
}
