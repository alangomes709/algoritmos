#include<stdio.h>

int pares(int vet[], int n){
    int npares=0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]%2==0)
        {
            npares++;
        }
        
    }
    
    return npares;
}

int main(){
    int hamb[10]={1,2,3,4,5,6,7,8,9,10};
    int a=10;
    printf("Numero de pares: %d", pares(hamb, a));
}