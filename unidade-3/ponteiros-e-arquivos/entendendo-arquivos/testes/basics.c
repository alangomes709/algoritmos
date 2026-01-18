#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ANOTACAO "\\home\\alan\\Documents\\GitHub\\algoritimos\\unidade-3\\ponteiros-e-arquivos\\entendendo-arquivos\\testes\\bigode.txt"
int main(){
    FILE *gorgonzola;
    char escrever[20];
    int i;
    gorgonzola=fopen(ANOTACAO, "w");
    if (gorgonzola==NULL)
    {
        printf("Deu erro\n");
        exit(1);
    }
    printf("Entre com a string\n");
    fgets(escrever,20,stdin);
    for (i = 0; i < 20; i++)
    {
        fputc(escrever[i], gorgonzola);
    }
    fclose(gorgonzola);
    return 0;
    
    
}