#include<stdio.h>

int main() {
    int x;
    printf("Digite um número inteiro: \n");
    scanf("%d", &x);
    printf("Antecessor: %d\n", x - 1);
    printf("Posterior: %d\n", x + 1);
    return 0;
}