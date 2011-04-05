#include <stdio.h>
#define ROZM 100
#include <string.h>



struct osoba {
    char miesiac[20];
    int kilometry;
    int paliwo;
    float cena;
};
struct osoba wykaz[ROZM];
int ilosc;

FILE *plikWykazu;

void czytaj()
{
    //  czytanie danych z pliku "wykaz.txt" do tablicy "wykaz"
    plikWykazu = fopen("wykaz.txt", "r");
    if (plikWykazu == NULL) {
	printf("blad odczytu");
	return;
    }
    int i = 0;
    while (i < ROZM &&
	   fscanf(plikWykazu, "%s%d%d%f", wykaz[i].miesiac,
		  &wykaz[i].kilometry, &wykaz[i].paliwo,
		  &wykaz[i].cena) != EOF)
	i++;

    ilosc = i;
    printf("przeczytano %d zapisow\n", ilosc);
    fclose(plikWykazu);
}

void oblicz()
{
    float spalanie;
    int i = 0;
    float sumakil = 0;
    float sumpal = 0;
    float koszt = 0;
    float sumakoszt = 0;
    while (i < ilosc) {
	sumakil = sumakil + wykaz[i].kilometry;
	sumpal = sumpal + wykaz[i].paliwo;
	koszt = wykaz[i].paliwo * wykaz[i].cena;
	sumakoszt = sumakoszt + koszt;
	i = i + 1;
    }
    spalanie = sumpal/sumakil * 100;
    sumakoszt = sumakoszt / sumakil;
    printf("Spalanie na 100km: %.2f\n", spalanie);
    printf("Lacznie km: %.0f\n", sumakil);
    printf("Lacznie paliwa: %.0f\n", sumpal);
    printf("Koszt na 1km(zl): %.2f\n", sumakoszt);
    printf("Koszt na 100km(zl): %.2f\n", sumakoszt*100);
}

void drukuj()
{
    int i = 0;
    printf("\n");
    while (i < ilosc) {

	printf("%d) miesiac: %s, kilometry: %d, paliwo: %d cena: %f\n",
	       i, wykaz[i].miesiac, wykaz[i].kilometry,
	       wykaz[i].paliwo, wykaz[i].cena);
	i++;
    }
}
