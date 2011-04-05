#include<errno.h>

int wywolanie(int);
int otworz_plik(FILE ** in_handle, int *, char *argv[1]);
void zamknij_plik(FILE ** in_handle);
void wczytaj_dane(FILE ** in_handle, unsigned *, double *, double *);
void oblicz(unsigned, double, double);
