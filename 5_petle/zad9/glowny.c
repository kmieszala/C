#include "def.h"
#include<stdio.h>
#include<errno.h>

int main(int argc, char *argv[]) {
    FILE *in_handle;
    unsigned kilometry;
    double litry, cena;

    if (otworz_plik(&in_handle, &argc, &argv[1])) {
wczytaj_dane(&in_handle, &kilometry, &litry, &cena);

zamknij_plik(&in_handle);
    }

    return 0;
}
