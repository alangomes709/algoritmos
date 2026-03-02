#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y;
    int aux;

    printf("Digite x: \n");
    scanf("%d", &x);
    printf("Digite y: \n");
    scanf("%d", &y);

    aux = x;
    x = y;
    y = aux;

    printf("X: %d  \n", x);
    printf("Y: %d \n", y);

    return 0;
}