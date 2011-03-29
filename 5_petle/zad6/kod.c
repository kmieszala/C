#include <stdio.h>

float pr(char *prompt)
{
    printf("%s", prompt);
    float value;
    scanf("%f", &value);	//scanf() jest takze w stdin.h :>
    return value;
}

void wypmin(float *tab)
{
    float min = tab[0];
    int i;

    for (i = 1; i < 6; i++) {
	if (tab[i] < min) {
	    min = tab[i];
	}
    }

    printf("Minimalna wartosc : %f", min);
}

void wypmax(float *tab)
{
    float max = tab[0];
    int i;

    for (i = 1; i < 6; i++) {
	if (tab[i] > max) {
	    max = tab[i];
	}

    }

    printf("Maksymalna wartosc : %f", max);
}
