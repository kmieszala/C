#include<stdio.h>
#define ILE 15

main () {
	  float tab[ILE], x;  int k, n, m;
	    printf("\nSORTOWANIE BABELKOWE");
	      printf("\nPodaj %i liczb rzeczywistych: ", ILE);
	        for (k=0; k<ILE; k=k+1)  /*Wczytuje 15 liczb*/
			    scanf("%f", &tab[k]);

		  n=ILE;
		    while (n>1) {
			        m=1;
				for (k=1; k<n; k=k+1)
					if (tab[k-1] > tab[k]) {  /*Porownuje dwie liczby*/
						x=tab[k-1]; tab[k-1]=tab[k]; tab[k]=x; /*zamienia większę wartośc z mniejszą */
						m=k;
					}
				n=m;
				}
		      
		      printf("\nWynik sortowania:\n");
		        for (k=0; k<ILE; k=k+1) /*Drukuje posortowane liczby od najmniejszej*/
				    printf("  %f\n", tab[k]);
			  printf("\n");
}

