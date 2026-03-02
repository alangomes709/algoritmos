#include<stdio.h>

int main() {
    int meuNum;
    printf("Digite um número inteiro");
    scanf("%d", &meuNum);
    if (meuNum<0)
    {
        printf("Seu número é negativo");
    }else{
        printf("Seu número é positivo");
    }
    return 0;
}