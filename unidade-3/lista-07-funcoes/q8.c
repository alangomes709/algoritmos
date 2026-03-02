#include<stdio.h>

int menor_elemento(int v[], int n);

int main(){
    int i;
    int tamVetor=7;
    int algo[7];
    for ( i = 0; i < tamVetor; i++)
    {
        printf("Elemento pos %d:  ", i);
        scanf("%d", &algo[i]);
    }
    printf("Os elementos mínimos encontrados no vetor: ");
    menor_elemento(algo, tamVetor);
    printf("\n");

    return 0;
}

int menor_elemento(int v[], int n){
    int i;
    int menor=v[0];
    for ( i = 1; i < n; i++)
    {
        if (v[i]<menor)
        {
            menor=v[i];
        }
    }
    for ( i = 0; i < n; i++)
    {
        if (v[i]==menor)
        {
            printf("%d ", menor);
        }
    }
    return 0;
}