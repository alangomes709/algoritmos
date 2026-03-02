#include<stdio.h>

int ordenar_elementos(int v[], int n);

int main(){
    int i;
    int tamVetor=7;
    int algo[7];
    for ( i = 0; i < tamVetor; i++)
    {
        printf("Elemento pos %d:  ", i);
        scanf("%d", &algo[i]);
    }
    printf("Os elementos ordenados no vetor: ");
    ordenar_elementos(algo, tamVetor);
    printf("\n");
    return 0;
}

int ordenar_elementos(int v[], int n){
    int i, j;
    int aux=0;
    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            if (v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}