#include<stdio.h>
int main () {
    int idade;
    printf("Verificando sua classe eleitorial. Qual a sua idade?\n");
    scanf("%d", &idade);
    if (idade<16)
    {
        printf("Tu não vota");
    }else if (idade>=16 && idade<=18 || idade>=65)
    {
        printf("Vota se quiser");
    }else if (idade>18 && idade<65)
    {
        printf("TEM que votar");
    }
    return 0;
}