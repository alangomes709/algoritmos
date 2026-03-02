#include<stdio.h>
#include<stdlib.h>

int main() {
    float x, y;

    printf("Insira o valor de x: \n");
    scanf("%f", &x);
    printf("Insira o valor de y: \n");
    scanf("%f", &y);

    printf("A soma desses dois números é: %f\n", x + y);
    printf("A subtração desses números é: %f\n", x - y);
    printf("A multiplicação desses números é: %f\n", x * y);
    printf("A divisão desses números é: %f\n", x / y);

    return 0;
}