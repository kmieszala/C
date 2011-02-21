#include<stdio.h>
main(){
	int x[30], y[30], wynik[30];
	int i=0, w, j=0, o=0, a=30;
	printf("\nKomenda -1 konczy wczytywanie cyfr.\n");
	for(a;a>=0;a=a-1){
		printf("Podaj cyfre liczby x: ");
		scanf("%d", &x[i]);
		if(x[i]==-1){
			a=a-100;
		}
		i=i+1;
	}
	i=i-2;
	for(a=30; a>=0; a=a-1){
		printf("Podaj cyfre liczby y: ");
		scanf("%d", &y[j]);
		if(y[j]==-1){
			a=a-100;
		}
		j=j+1;
	}
	j=j-2;
	
	while(i>=0 || j>=0){
		if(x[i]>=y[j]){
			w=x[i]-y[j];
			i=i-1;
		}
		else{
			x[i]=x[i]+10;
			w=x[i]-y[j];
			i=i-1;
			x[i]=x[i]-1;
		}
		
		j=j-1;
		wynik[o]=w;
		
		o=o+1;
	}
	o=o-1;
	while(o>=0){
		printf("%d", wynik[o]);
		o=o-1;
	}
	printf("\n");
}












