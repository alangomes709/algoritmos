#include<stdio.h>
int main() {
    int i, num;
    float media, valorsom=0, a=0;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite num");
        scanf("%d", &num);
        if (num%5==0)
        {
            valorsom+=num;
            a++;
        }
    }
    if (a>0)
    {
        media=valorsom/a;
        printf("soma Num div por 5: %f\n", valorsom);
        printf("media Num div por 5 %f\n", media);
    } else {
        printf("Nenhum num div por 5 digitado");
    }
    return 0;
}