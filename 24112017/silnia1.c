#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    int wynik,n,i;
    wynik=1;
    printf("OBLICZANIE SILNI Z LICZBY N \n");
    printf("Podaj liczbe, ktorej silnie chcesz obliczyc \n");
    scanf("%d",&n);
    if (n<0)
        printf("Wpisales liczbe ujemna, z ktorej nie mozna obliczyc n! \n");
    else
    {
        i=n; //będziemy mnozyć aktualny wynik przez "i" i zmniejszać "i" o 1 w każdej iteracji
        while(i>0)
            wynik*=i--;
        printf("%d! wynosi %d \n",n,wynik);
    }
    return 0;
}
