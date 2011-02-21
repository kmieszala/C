#include<stdio.h>
main(){
	int a[30];
	int b[30];
	int sum[30];
	int j=0, w=0;
	int i=0;
	int x=0;
	int c=0, d=0;
	printf("Ilosc cyfr liczby a=ilosci cyfr liczby b.");
	printf("\nKomenda -1 konczy wczytywanie cyfr.\n");
	for(i=0;i<30;i=i+1){
		printf("Podaj cyfre liczby 'a': ");
		scanf("%d", &a[i]);
		
		
		if(a[i]<0){
			i=i+100;
		}
		c=c+1;
	}
	i=0;
	for(c;c>1;c=c-1){
		printf("Podaj cyfre liczby 'b':");
		scanf("%d", &b[i]);
		i=i+1;
		d=d+1;
	}
	x=0;
	i=i-1;	
	while(d>0){
		
		w=a[i]+b[i]+x;
		x=0;
		if(w>9){
			w=w-10;
			x=1;
		}
		sum[j]=w;
		d=d-1;
		
		i=i-1;
		j=j+1;
	}
	if(x==1){
		printf("1");
	}
	j=j-1;
	for(j;j>=0;j=j-1){
		printf("%d", sum[j]);
		
	}

printf("\n");
}
