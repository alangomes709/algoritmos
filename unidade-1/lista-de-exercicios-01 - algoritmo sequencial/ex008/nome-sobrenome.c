#include<stdio.h>

int main() {
    char nome[100];
    char sobreNome[100];

    printf("Escreva seu nome: \n");
    //scanf("%s", nome);
    fgets(nome, sizeof(nome), stdin);
    printf("Escreva seu sobrenome: \n");
    //scanf("%s", sobreNome);
    fgets(sobreNome, sizeof(sobreNome), stdin);

    printf("Seu nome completo: %s %s", nome, sobreNome);
    return 0;
}