#include<stdio.h>
main(){
	int ile=15;
	int z=1;
	float tab[16], x;  int k=0, n, m;
	printf("\nSORTOWANIE BABELKOWE");
	printf("\nPodaj %i liczb rzeczywistych: \n", ile);
	ile=16;
	for (m=1; m<ile; m=m+1){
		k=m;
		scanf("%f", &tab[k]); z=z+1;
		for(k=1;k<z;k=k+1){
			if(tab[k-1]>tab[k])   {x=tab[k]; tab[k]=tab[k-1]; tab[k-1]=x; k=1;}
		}
		printf("\n");
		for(k=1;z>k;k=k+1){
			printf("%.2f\n",tab[k]);
		}		
	}
}

