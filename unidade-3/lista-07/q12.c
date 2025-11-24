#include<stdio.h>

void somaVetor(int v[], int tamVetor);

int main(){
    int hamburguer[5]={4,2,1,5,8};
    int tamHamb=5;
    somaVetor(hamburguer, tamHamb);
}

void somaVetor(int v[], int tamVetor){
    int i=0;
    if (tamVetor>6)
    {
        return;
    } else {
        somaVetor(v[i+1], 5-1);
        printf("%d", v[i]);
    }
    
}