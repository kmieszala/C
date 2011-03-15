#include <stdio.h>
#define rok 2011 /* obecny rok */

int kod(lata){
  int i, dni;
  dni = 0;
  for(i = rok - 1; i >= rok - lata; i--) {
    if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
      dni += 366;
    }else dni += 365;

  }
  double wynik = (double) dni * 24 * 60 * 60;
 return wynik;
}
