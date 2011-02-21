#include<stdio.h>
main(){
	int mac1[100][100], mac2[100][100], wynik[100][100];
	int i=0, j=0, a=0, b=0, x=1, y=1, g=0, h=0, m=0, z=0, v=0, w=0, n=0, c=1, d=1;
	for(i=101; i>=0; i=i-1){
		for(j=101; j>0; j=j-1){
			mac1[i][j]=0;
		}
	}
	for(z=101; z>=0; z=z-1){
		for(v=101; v>0; v=v-1){
			wynik[z][v]=0;
		}
	}
	z=0;
	v=0;
	for(a=101; a>=0; a=a-1){
		for(b=101; b>0; b=b-1){
			mac2[a][b]=0;
		}
	}
	a=0;
	b=0;
	i=0;
	j=0;
	printf("Podaj wielkosc pierwszej macierzy:\nWierszy: ");
	scanf("%d", &x);  //Podanie wielkosci macierzy  x odpowiada ilosci wierszy
	printf("Kolumn: ");
	scanf("%d", &y);   // y odpowiada ilosci kolumn
	printf("\n");
	g=x;
	h=y;
	printf("Podaj wielkoĹ›Ä‡ drugiej macierzy:\nWierszy: ");
	scanf("%d", &c);  //Podanie wielkosci macierzy  c odpowiada ilosci wierszy
	printf("Kolumn: ");
	scanf("%d", &d);   // d odpowiada ilosci kolumn
	m=c;
	n=d;
	if(y==c){
		printf("Zacznij wpisywac liczby pierwszej macierzy:\n");

		for(x; x>0; x=x-1){
			if(x<g) printf("Kolejny wiersz:\n");
			y=h;
			for(y; y>0; y=y-1){
				scanf("%d", &mac1[i][j]);
				j=j+1;
			}
			i=i+1;
			j=0;
		}
		printf("Zacznij wpisywac liczby do drugiej macierzy:\n");
		for(c; c>0; c=c-1){
			if(c<m) printf("Kolejny wiersz:\n");
			d=n;
			for(d; d>0; d=d-1){
				scanf("%d", &mac2[a][b]);
				b=b+1;
			}
			a=a+1;
			b=0;
		}
		i=0;
		j=0;
		a=0;
		b=0;
		x=g;
		y=h;
		c=m;
		d=n;
		for(x; x>0; x=x-1){
			y=h;
			for(y; y>0; y=y-1){
				printf("%3d", mac1[i][j]);
				j=j+1;
			}
			printf("\n");
			i=i+1;
			j=0;
		}
		printf("  *\n");
		for(c; c>0; c=c-1){
			d=n;
			for(d; d>0; d=d-1){
				printf("%3d", mac2[a][b]);
				b=b+1;
			}
			printf("\n");
			a=a+1;
			b=0;
		}
		x=g;
		c=m;
		y=h;
		d=n;
		i=0;
		j=0;
		a=0;
		b=0;
		for(x; x>0; x=x-1){   //tyle co wierszy
			c=m;
			for(c; c>0; c=c-1){  //tyle co kolumn w 2 macierzy
				w=0;
				j=0;
				y=h;
				a=0;
				for(y; y>0; y=y-1){ //tyle co kolumn w 1 macierzy
					w=mac1[i][j]*mac2[a][b]+w;
					j=j+1;
					a=a+1;
				}
				
				b=b+1;
				wynik[z][v]=w;
				v=v+1;
			}
			i=i+1;
			j=0;
			a=0;
			b=0;
			z=z+1;
			v=0;
		}
		x=g;
		d=n;
		z=0;
		v=0;
		printf("  =\n");
		for(x; x>0; x=x-1){
			d=n;
			for(d; d>0; d=d-1){
				printf("%3d", wynik[z][v]);
				v=v+1;
			}
			printf("\n");
			v=0;
			z=z+1;
		}
		printf("\n");
	}
	else printf("Mnozenia nie mozna wykonac\n");
}



