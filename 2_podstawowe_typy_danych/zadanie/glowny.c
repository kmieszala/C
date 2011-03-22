#include <stdio.h>

float pobierz_dane( char *prompt )
{
float value;
printf( "%s", prompt );

scanf( "%f", &value );
return value;
}

float oblicz_wynik( float a , float b )
{
float wynik;
wynik = a / b;
return wynik;

}

void wypisz_wynik( float wynik , char *prompt )
{
printf("%s%f" , prompt , wynik );

}
