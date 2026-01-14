#include<stdio.h>

struct Endereco
{
    char rua[50];
    int numero;
    char cep[20];
};

struct Cliente
{
    char nome[30];
    int id;
    struct Endereco residencia;
};


int main(){
    struct Cliente c;
    printf("Nome: ");
    fgets(c.nome, 50, stdin);
    printf("");


}