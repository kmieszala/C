#include<stdio.h>
#include<math.h>

int main(){
	float x, kwadrat, odwrotny;
	printf("Podaj liczbe: ");
	scanf("%f", &x);
	if(x==0){
		printf("Podana liczba %.3f nie posiada odwrotności i pierwiastka kwadratowego.\n", x);
	}
	else if(x<0){
		odwrotny=1/x;
		printf("Liczba odwrotna dla %.3f wynosi %.3f.\nPodana liczba nie posiada pierwiastka kwadratowego.\n", x, odwrotny);
	}
	else {
	kwadrat=x*x;
	odwrotny=1/x;
	printf("Liczba odwrotna dla %.3f wynosi %.3f.\nPierwiastek kwadratowy liczby %.3f wynosi %.3f.\n", x, odwrotny, x, kwadrat);
	}
	return 0;
}




