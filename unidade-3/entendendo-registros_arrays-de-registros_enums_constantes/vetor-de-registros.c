#include<stdio.h>

struct compras
{
    float bolacha;
    float carne;

    float total;
};

float total(struct compras valores[]){
    float theRealOne=0;
    for (int i = 0; i < 4; i++)
    {
        theRealOne+=valores[i].bolacha+valores[i].carne;
        
    }
    return theRealOne;
}

int main(){
    struct compras precos[4];
    int i;


    printf("precifique os itens a seguir de acordo com o dia da promoção:\n");
    for ( i = 0; i < 4; i++)
    {
        printf("dia %d\n\n", i);
        printf("bolacha  ");
        scanf("%f", &precos[i].bolacha);
        printf("carne  ");
        scanf("%f", &precos[i].carne);        
    }

    printf("\n\n");
    printf("PREÇOS OFICIAIS\n");

    for ( i = 0; i < 4; i++)
    {
        printf("dia %d\n\n", i);
        printf("bolacha  %f\n", precos[i].bolacha);
        printf("carne  %f\n", precos[i].carne);
    }

    printf("soma total dos itens: %f\n", total(precos));


    return 0;
}