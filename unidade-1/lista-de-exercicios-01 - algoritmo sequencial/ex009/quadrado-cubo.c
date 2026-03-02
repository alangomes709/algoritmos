#include<stdio.h>

int main() {
    int x;
    printf("Escreva um valor para calcular o quadrado e o cubo do mesmo:");
    scanf("%d", &x);
    printf("Valor ao quadarado: %d\n", x * x);
    printf("Valor ao cubo: %d", x * x * x);
    return 0;
}