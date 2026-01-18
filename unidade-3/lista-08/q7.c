#include<stdio.h>

struct Endereco
{
    char rua[50];
    int numero;
    char cep[20];
};


struct Cliente
{
    char nome[50];
    int id;
    struct Endereco residencia;
};



int main (){
    struct Cliente banco;
    printf("Digite seu nome: ");
    fgets(banco.nome, 50, stdin);
    banco.id=1;
    printf("Digite nome da sua rua: ");
    fgets(banco.residencia.rua, 50, stdin);
    printf("Digite o numero da sua casa: ");
    scanf("%d", &banco.residencia.numero);
    printf("Digite seu cep: ");
    fgets(banco.residencia.cep, 20, stdin);
    
    //formatting
    printf("Nome: %s\n", banco.nome);
    printf("Rua: %s\n", banco.residencia.rua);
    printf("Número da casa: %d\n", banco.residencia.numero);
    printf("CEP: %s\n", banco.residencia.cep);
    
    return 0;


    
}