#include<stdio.h>
int main(){
    int veta[10], vetb[10], vetc[10];
    int i;
    printf("Digite dez números inteiros:\n");
    for (i = 0; i < 10; i++){
        printf("Digite valor %d: ", i);
        scanf("%d", &veta[i]);
    }
    printf("Digite dez números inteiros:\n");
    for (i = 0; i < 10; i++){
        printf("Digite valor %d: ", i);
        scanf("%d", &vetb[i]);
    }
    for (i = 0; i < 10; i++){
        vetc[i]=veta[i]*vetb[i];
    }
    for ( i = 0; i < 10; i++)
    {
        printf("Resultado\n");
        printf("%d  ", vetc[i]);
    }
    return 0;
}