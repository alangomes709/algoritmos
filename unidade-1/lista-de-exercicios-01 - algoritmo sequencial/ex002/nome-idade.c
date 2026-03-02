#include<stdio.h>

int main() {
    char nome[100];
    int nascimento;
    int  idade;
    int hoje = 2025;

    printf("Digite seu nome:\n");
    scanf("%s", nome);
    fgets(nome, sizeof(nome), stdin);
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &nascimento);
    
    idade = hoje - nascimento;
    printf("Seu nome é: \n");
    printf("%s", nome);
    printf("Sua idade é: \n");
    printf("%d", idade);
}