#include<stdio.h>
int main() {
    int ano;
    printf("Digite um ano para saber se é bissesto ou não.\n");
    scanf("%d", &ano);
    if (ano%4==0 || ano%400==0)
    {
        printf("Ano bissexto");
    }else{
        printf("Ano comum");
    }
    return 0;
}