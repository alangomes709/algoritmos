#include<stdio.h>
int main(){
    int vet[10], i;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }
        for ( i = 0; i < 10; i++)
    {
        if (vet[i]%2==0)
        {
            printf("valor par: %d\n", vet[i]);
        }
    }
    return 0;
}