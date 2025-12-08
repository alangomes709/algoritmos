#include<stdio.h>

#define ITENS_DA_LISTA_DE_COMPRAS 5
#define MENSAGEM "Você não tem dinheiro para mais coisas"

int main(){
    int i;
    char lista[10][30];
    printf("Preencha a lista de compras:\n");
    for ( i = 0; i < ITENS_DA_LISTA_DE_COMPRAS; i++)
    {
        fgets(lista[i], 30, stdin);
    }
    printf("Itens escolhidos: \n");
    for ( i = 0; i < ITENS_DA_LISTA_DE_COMPRAS; i++)
    {
        printf("%s\n", lista[i]);
    }
    printf(MENSAGEM);
    return 0;
}