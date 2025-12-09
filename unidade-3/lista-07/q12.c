#include<stdio.h>

int somaVetor(int vetor[], int tamV){
    if (tamV==0)
    {
        return 0;
    }
    return vetor[tamV-1] += somaVetor(vetor, tamV-1);
    
}

int main(){
    int vet[6]={6,2,3,4,8,1};
    int tamVet=6;
    printf("%d", somaVetor(vet, tamVet));

    return 0;
}