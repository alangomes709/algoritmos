#include<stdio.h>

int maior_elemento(int v[], int n);

int main(){
    int i;
    int tamVetor=7;
    int algo[7];
    for ( i = 0; i < tamVetor; i++)
    {
        printf("Elemento pos %d:  ", i);
        scanf("%d", &algo[i]);
    }
    printf("Os elementos máximos encontrados no vetor: ");
    maior_elemento(algo, tamVetor);
    printf("\n");

    return 0;
}

int maior_elemento(int v[], int n){
    int i;
    int maior=v[0];
    for ( i = 1; i < n; i++)
    {
        if (v[i]>maior)
        {
            maior=v[i];
        }
    }
    for ( i = 0; i < n; i++)
    {
        if (v[i]==maior)
        {
            printf("%d ", maior);
        }
    }
    return 0;
}