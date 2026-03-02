#include<stdio.h>

int main() {
    int base, altura;
    
    printf("Digite a base do triângulo para calcular a área: \n");
    scanf("%d", &base);
    printf("Agora a altura: \n");
    scanf("%d", &altura);

    printf("A área do trângulo é: %d", (base * altura)/2);
}