//STATYSTYKA LITER W TEKSCIE

#include<stdio.h>
#include<stdlib.h>

#define DL_ALFABETU 26

void  blad (char komunikat[]) {
  printf("\n!!! BLAD -- %s!!!\n\n", komunikat);
  exit(1);
}

int  numer_litery (char litera) {
    // duze litery sa sklejane z malymi; nielitery uzyskuja numer -1
  if ('a'<=litera && litera<='z')  return (int)litera - (int)'a';
  else
    if ('A'<=litera && litera<='Z')  return (int)litera - (int)'A';
    else  return -1;
}

char  litera_o_numerze (int n) {
    // jesli n<0 lub n>=DL_ALFABETU -- sygnal bledu
  if (0<=n && n<DL_ALFABETU)  return (char)((int)'a'+n);
  else  blad("zly numer litery");
}
int j=0;
main () {
  char znak;
  char znak2;
  int liczniki[30][30] ,j , i;

    // inicjalizacja licznikow:
  for (i=0; i<DL_ALFABETU; i++)  
for(j=0; j<DL_ALFABETU; j++)
	liczniki[i][j] = 0;
    // wczytywanie tekstu i zliczanie liter:
   znak2 = getchar(); 
   if(znak2 == EOF){  
	   blad("Wejscie powinno miec wiecej niz 1 znak!");    } 
   znak = getchar();   
   while (znak != EOF && znak2!=EOF) {    
	   if(znak == ' ' || znak == '\n'){  
	     	   znak2 = getchar();     
		   if(znak2 != EOF){      
			   znak = getchar();        }     
		   else        break;      }     
		   i = numer_litery(znak);  
	       	   j = numer_litery(znak2);  
	       	   if (i>=0 && j>=0)  liczniki[j][i] = liczniki[j][i]+1;    
		   znak2 = znak;   
		   znak = getchar();    }
			printf("\n"); 

    // drukowanie statystyki:
			
    printf("\nSTATYSTYKA:\n  "); 	
    for (i=0; i<DL_ALFABETU; i++)     
	    printf(" %c ", litera_o_numerze(i)); 
    for (i=0; i<DL_ALFABETU; i++){   
	    printf("\n%c ", litera_o_numerze(i));  
	    for(j=0; j<DL_ALFABETU; j++)     
	       	    printf(" %i ", liczniki[i][j]);    }   
	    printf("\n");
//drukowanie statystyki lista
	    for (i=0; i<DL_ALFABETU; i++)  
		    for (j=0; j<DL_ALFABETU; j++)    
			    printf("  %c%c: %4i\n", litera_o_numerze(i), litera_o_numerze(j),   liczniki[i][j]);  
	    printf("\n"); 
     	    return 0;  } 
