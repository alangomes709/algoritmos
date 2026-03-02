#include<stdio.h>
int main(){
    int vet[10], i, n, g=0;
    printf("Digite n:");
    scanf("%d", &n);
    for ( i = 0; i < 10; i++)
    {
        printf("digite valor %d: ", i);
        scanf("%d", &vet[i]);
        if (vet[i]==n)
        {
            g++;
        }
    }
    for ( i = 0; i < 10; i++)
    {
        if (vet[i]==n)
        {
            g++;
        }else{
            break;
        }
    }
    printf("n aparece %d vezes", g);
    
}