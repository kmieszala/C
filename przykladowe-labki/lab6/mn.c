#include<stdio.h>
main(){
        int x[30], tab[30], y[30], wynik[30], suma[30][70];
        int i=0, k,  p,  w, j=0, o=0, b=0, c=0,  a=30, g=0, h=0;
        printf("\nKomenda -1 konczy wczytywanie cyfr.\n");
        for(a;a>=0;a=a-1){
                printf("Podaj cyfre liczby x: ");
                scanf("%d", &x[i]);
                if(x[i]==-1){
                        a=a-100;
                }
                i=i+1;
                b=b+1;
        }
        i=i-2;
        b=b-1;
        a=30;
        for(a; a>=0; a=a-1){
                printf("Podaj cyfre liczby y: ");
                scanf("%d", &y[j]);
                if(y[j]==-1){
                        a=a-100;
                }
                j=j+1;
                c=c+1;
        }
        j=j-2;
        c=c-1;
        i=0;
        j=0;
        p=0;
        a=b;
        while(c>0){
                for(i=0; a>i; a=a-1){
                        suma[g][h]=x[i]*y[j]+p;
                        p=0;
                        while(suma[g][h]>9){
                                suma[g][h]=suma[g][h]-10;
                                p=p+1;
                        }
                        h=h+1;
                        i=i+1;
                }
                j=j+1;
                i=0;
                c=c-1;
                g=g+1;
                h=j;
                a=b;
        }
        j=j-1;
        g=g-1;
        h=0;
        k=g;
        a=g;
        g=0;
        w=0;
        p=0;
        while(j>0){
                k=a;
                for(k; k>0; k=k-1){
                        w=w+suma[g][h]+p;
                        p=0;
                        while(w>9){
                                w=w-10;
                                p=p+1;
                        }
                        h=h+1;
                }
                g=g+1;
                h=0;
        printf("%d%d", p, w);

        }
}
