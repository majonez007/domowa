#include <stdio.h>

int N;
int M;
int macierz[N][M];
int przeksztalc(macierz, int n);
{
                for(int i=0;i<n;i++){
                        int j;

                        for(j=i;j<n;j++)
                                if(A[j][i]!=0)
                                        break;
                        if(j==n)
                                return 0;

                        for(int k=i;k<n;k++){
                                double l= A[j][k];
                                A[j][k]=A[i][k];
                                A[i][k]=l;
                        }

                        for (int k=i+1;k<n;k++){
                                double c=A[k][i]/A[i][i];
                                for(int h=i;h<=n;h++)
                                        A[k][n]-= A[i][h] *c;
                        }
                }

                return 1;
}

int main()
{
        int n;
        printf("Podaj liczbę równań do rozpatrzenia");
        scanf("%d",&n);
         int i,j;

    printf("Podaj wyrazy macierzy rozmiaru %dx%d:\n",n,n);
   
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);


  printf("\n\nSzukane rozwiązanie macierzy to:\n");
    przeksztalc(macierzA, int n);


        return 0;
}
