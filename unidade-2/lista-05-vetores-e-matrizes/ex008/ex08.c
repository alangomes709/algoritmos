#include<stdio.h>
int main(){
    int veta[10];
    int i, aux;
    printf("Digite dez números inteiros:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite valor %d: ", i);
        scanf("%d", &veta[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        aux=veta[i];
        veta[i]=veta[9-i];
        veta[9-i]=aux;
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", veta[i]);
    }
    return 0;
    
    
}