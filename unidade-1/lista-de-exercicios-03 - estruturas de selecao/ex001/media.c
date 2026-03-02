#include<stdio.h>

int main() {
    int n1, n2, n3, media;
    printf("Insira sua primeira nota");
    scanf("%d", &n1);
    printf("Insira sua segunda nota");
    scanf("%d", &n2);
    printf("Insira sua terceira nota");
    scanf("%d", &n3);
    media = (n1+n2+n3)/3;
    if (media>=7)
    {
        printf("Aprovado");
    }else if (media<3)
    {
        printf("Reprovado");
    }else if (media>3||media<7)
    {
        printf("Tem de fazer a prova final");
    }
    return 0;
}