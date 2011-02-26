#include<stdio.h>
int main(){
	int x, kwadrat;
	printf("Podaj liczbe:");
	scanf("%i", &x);
	if(0>=x){
		printf("Podana liczba jest zla.\n");
		return 0;
	}
	else {
		kwadrat=x*x;
		printf("Pierwiastek kwadratowy z podanej liczby wynosi: %i.\n", kwadrat);
		return 0;
	}
}
